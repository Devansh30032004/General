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
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll arr[n];
    for(ll i=0;i<n;i++){
        arr[i]=v[i];
    }
    if(n==1){
        if(v[0]==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    else if(n!=v[0]){
        cout<<"NO"<<"\n";
    }else{
        vector<ll> v1;
        v1.pb(n);
        sort(v.begin(),v.end());
        ll j=1;
        while(j<=n){
            ll ind=upper_bound(v.begin(),v.end(),j)-v.begin();
            //cout<<ind<<"\n";
            if(ind==n)
                v1.pb(1);
            else
                v1.pb(n-ind);
            j+=1;
        }
        ll ch=0;
        for(ll i=0;i<n;i++){
            if(arr[i]!=v1[i]){
                ch=1;
            }
            //cout<<v1[i]<<" ";
        }
        //cout<<"\n";
        if(ch==0){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
   } 

return 0;
}