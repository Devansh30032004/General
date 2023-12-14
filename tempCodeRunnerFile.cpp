#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
           cout<<0<<"\n";
        }
        int ans=abs(arr[n-1]-arr[0]);
        if(n>1){
            for(int i=1;i<(n/2);i++){
                int q=abs(arr[n-i-1]-arr[i]);
                ans=__gcd(ans,q);
            }
            cout<<ans<<"\n";
        }
    }
}
