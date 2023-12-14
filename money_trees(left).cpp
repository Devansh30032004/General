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
        ll n,k;
        cin>>n>>k;
        ll a[n],h[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>h[i];
        }
        ll sum=a[0],count=1;
        vector<ll> v;
        for(ll i=1;i<n;i++){
            if((h[i-1]%h[i]==0) && (sum<=k)){
                sum+=a[i];
                if(sum>k){
                    sum=a[i];
                    v.pb(count);
                    count=1;
                    continue;
                }
                count+=1;
            }
            else if((h[i-1]%h[i]!=0) && (count>=1)){
                sum=a[i];
                v.pb(count);
                count=1;
            }
            else if((h[i-1]%h[i]==0) && (sum>k)){
                sum=a[i];
                v.pb(count);
                count=1;
            }
        }
        if(sum<=k){
           v.pb(count);
        }
        ll max=0;
        for(ll i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        cout<<max<<"\n";
    }

return 0;
}