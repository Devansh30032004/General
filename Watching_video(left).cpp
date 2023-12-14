#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int sum=arr[0],p=0,sum1=0;
    for(int i=1;i<n;i++){
        if((sum+arr[i])==m){
             p=arr[i];
        }else{
            if(p!=0 && arr[i]>p){
                sum1+=(arr[i]+1);
            }else{
                sum1+=arr[i];
            }
        }
    }
    cout<<(sum1+1+m);
return 0;
