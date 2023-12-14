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
        string s;
        cin>>s;
        ll arr[n];
        for(ll i=0;i<n;i++){
            arr[i]=int(s[i]);
        }
        if(k%2!=0){
            vector<ll> v1;
            vector<ll> v2;
            for(ll i=0;i<n;i++){
                if((i+1)%2==0){
                    v1.pb(arr[i]);
                }else{
                    v2.pb(arr[i]);
                }
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            ll j=0,h=0;
            for(ll i=0;i<n;i++){
                if((i+1)%2==0){
                    cout<<char(v1[j]);
                    j+=1;
                }else{
                    cout<<char(v2[h]);
                    h+=1;
                }
            }
        }else{
            sort(arr,arr+n);
            for(ll i=0;i<n;i++){
                cout<<char(arr[i]);
            }
        }
        cout<<"\n";
    }

return 0;
}