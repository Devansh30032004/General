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
        vector<int> v;
        ll count=0;
        v.push_back(1);
        ll j=2;
        while(j<=n){
            if((j%2!=0) || (j==2)){
                v.push_back(j);
                ll d=j*2;
                while(d<=n){
                    v.push_back(d);
                    d=d*2;
                }
            }
            j+=1;
        }
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

return 0;
}