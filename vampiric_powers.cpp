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
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        arr.pb(x);
    }
    ll pow[n];
    pow[n-1]=arr[n-1];
    for(ll i=n-2;i>=0;i--){
        pow[i]=pow[i+1]^arr[i];
    }
    ll max=0;
    for(ll i=0;i<n;i++){
        if(pow[i]>max){
            max=pow[i];
        }
        //cout<<pow[i]<<" ";
    }
    vector<ll> p;
    for(ll i=0;i<n;i++){
        p.pb(pow[i]);
    }
    while(true){
        ll ch=max;
        for(ll i=0;i<n;i++){
            if((ch^p[i])>max){
                max=p[i]^ch;
            }
        }
        if(max==ch){
            break;
        }else{
            vector<ll> v;
            for(ll i=0;i<n;i++){
                v.pb(arr[i]);
            }
            v.pb(max);
            p.clear();
            for(ll i=0;i<v.size();i++){
                p.pb(0);
            }
            p[v.size()-1]=v[v.size()-1];
            for(ll i=v.size()-2;i>=0;i--){
                p[i]=p[i+1]^v[i];
            }
        }
    }
    cout<<max<<"\n";
   } 

return 0;
}