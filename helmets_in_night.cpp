#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

ll arr[100000];
ll brr[100000];

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first!=b.first){
        if(a.first > b.first) return false;
        return true;
    }else{
        if(a.second >= b.second)  return false;
        return true;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            cin>>brr[i];
        }
        if(n==1){
            cout<<p<<"\n";
        }else{
            vector<pair<ll,ll>> v;
            for(ll i=0;i<n;i++){
                v.pb({brr[i],arr[i]});
            }
            sort(v.begin(),v.end(),cmp);
            for(ll i=0;i<v.size();i++){
                cout<<v[i].first<<" ";
            }
            cout<<"\n";
            ll no=0,ch=0,sum=0;
            for(ll i=0;i<v.size();i++){
                if((v[i].first<=p) && (ch<n-1)){
                    sum+=v[i].first*v[i].second;
                    ch+=v[i].second;
                    no=v[i].first;
                }
            }
            if(ch<n-1){
                sum+=(n-1-ch)*p;
            }
            if(ch>n-1){
                sum-=(ch-n+1)*no;
            }
            cout<<sum+p<<"\n";
        } 
    }

return 0;
}