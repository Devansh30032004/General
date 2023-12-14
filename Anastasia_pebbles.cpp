#include <bits/stdc++.h>
using namespace std;

vector<long long int> arr;

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int p=2*k,count=0,q=0;
    for(int i=0;i<n;i++){
        if(q==0){
            if(arr[i]>(p/2)){
                if(arr[i]>p)
                     q=arr[i]-p;
                count+=1;
            }
            else if(arr[i]<=(p/2)){
                count+=1;
                i++;
            }
        }
        else{
            if(q>(p/2)){
                count+=1;
                if(q>p){
                    q=q-p;
                }
            }
            else if(q<=(p/2)){
                if(arr[i]>(p/2)){
                    q=arr[i]-(p/2);
                    count+=1;
                }else if(arr[i]<=(p/2)){
                    q=0;
                    count+=1;
                }
            }
        }
    }
    cout<<count;
}