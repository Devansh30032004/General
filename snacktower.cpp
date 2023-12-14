#include <bits/stdc++.h>
using namespace std;  
 // correct approach but O(n^2) complexity but required is less than this...
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    int count=0;
    int max=n;
    for(int i=0;i<n;i++){
        if((arr[i]<max) && (count==0)){
            v.push_back(arr[i]);
            count+=1;
            cout<<"\n";
        }
        else if((arr[i]<max) && (count>0)){
            if(arr[i]>v[count-1]){
                v.push_back(arr[i]);
                count+=1;
            }else{
                vector<int> v1;
                int ch=0;
                while((v[count-1]>arr[i]) && (count!=0)){
                    v1.push_back(v[count-1]);
                    v.pop_back();
                    count--;
                    ch+=1;
                }
                v.push_back(arr[i]);
                count+=1;
                for(int j=ch-1;j>=0;j--){
                    v.push_back(v1[j]);
                    v1.pop_back();
                    count+=1;
                }
            }
            cout<<"\n";
        }
        else if(arr[i]==max){
            cout<<arr[i]<<" ";
            --max;
            int k=count;
            for(int j=k-1;j>=0;j--){
                if(v[j]==max){
                    cout<<v[j]<<" ";
                    v.pop_back();
                    count--;
                    max--;
                }
                else{
                    break;
                }
            }
            cout<<"\n";
        }
    }
    if(count!=0){
        for(int i=count-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
    }

return 0;
}