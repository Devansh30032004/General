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
        ll brr[n];
        for(ll i=0;i<n;i++){
            cin>>brr[i];
        }
        vector<ll> v;
        v.pb(brr[0]);
        for(ll i=1;i<n;i++){
            if((brr[i]!=1) && (brr[i-1]!=1)){
                v.pb(min(brr[i],brr[i-1])-1);
                v.pb(brr[i]);
            }else{
                v.pb(brr[i]);
            }
        }
        cout<<v.size()<<"\n";
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

return 0;
}