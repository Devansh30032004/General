#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<ll>> v;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            for(ll j=0;j<x;j++){
                ll y;
                cin>>y;
                v[i].pb(y);
            }
        }
        if(n==1){
            cout<<0<<"\n";
        }else{
            ll arr[2500]={0};
            
        }
    }

return 0;
}