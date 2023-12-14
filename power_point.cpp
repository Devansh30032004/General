#include <bits/stdc++.h>
using namespace std;

map<long long int,long long int> a;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n+2]={0};
        long long int arr1[n+2]={0};
        long long int brr[n+2]={0};
        long long int crr[n+2]={0};
        for(long long int i=1;i<=n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr,arr+(n+1));
        for(int i=1;i<=n;i++){
            brr[i]=arr[i]+brr[i-1];
        }
        crr[n]=arr[n];
        for(int i=n-1;i>=1;i--){
            crr[i]=arr[i]+crr[i+1];
        }
        for(int i=1;i<=n;i++){
            long long int d=((2*i-n)*arr[i])+n+crr[i+1]-brr[i];
            a[arr[i]]=d;
        }
        for(int i=1;i<=n;i++){
            cout<<a[arr1[i]]<<" ";
        }
        cout<<"\n";
    }

return 0;
}