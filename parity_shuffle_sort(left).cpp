#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll c=0;
        for(ll i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                c=1;
            }
        }
        if(c==0){
            cout<<0<<"\n";
        }else{
            
        }
    }

return 0;
}