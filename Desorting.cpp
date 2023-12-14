#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int arr1[n-1];
        for(int i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            arr1[i]=diff;
        }
        int min=1000000000;
        int ch=0;
        for(int i=0;i<n-1;i++){
            if(arr1[i]<min)
                min=arr1[i];
            if(arr1[i]<0){
                ch=1;
                break;
            }
        }
        if(ch==1)
            cout<<0<<"\n";
        else{
            if(min%2==0)
               cout<<(min/2)+1<<"\n";
            else
               cout<<(min+1)/2<<"\n";
        }
    }

return 0;
}