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
        ll x,y,n;
        cin>>x>>y>>n;
        ll g=y;
        ll f=((n-1)*n)/2;
        if((y-x)<f){
            cout<<-1<<"\n";
        }else if(n==3){
        	cout<<x<<" ";
        	cout<<y-1<<" "<<y<<"\n";
        }
        else{
            vector<ll> v;
            cout<<x<<" ";
            ll j=1;
            for(ll i=0;i<n-2;i++){
                v.pb(y-j);
                y=y-j;
                j+=1;
            }
            for(ll i=v.size()-1;i>=0;i--){
                cout<<v[i]<<" ";
            }
            cout<<g;
            cout<<"\n";
        }
    }

return 0;
}