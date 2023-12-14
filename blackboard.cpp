#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        sort(arr,arr+n);
        int j,ch1=0;
        for(int ch: arr){
            if(ch<0){
                j=ch;
                ch1=1;
                break;
            }
        }
        int mid=arr[n-1];
        if(ch1==1)
            cout<<j<<"\n";
        else
            cout<<mid<<"\n";
    }
return 0;
}

