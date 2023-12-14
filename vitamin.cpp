#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

int main()
{
    map<string,ll> m;
    m["ABC"]=400000;
    m["AB"]=400000;
    m["AC"]=400000;
    m["BC"]=400000;
    m["A"]=400000;
    m["B"]=400000;
    m["C"]=400000;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        m[s]=min(m[s],x);
    }
    vector<ll> v;
    v.pb(m["ABC"]);
    v.pb(m["AB"]+m["AC"]);
    v.pb(m["AB"]+m["BC"]);
    v.pb(m["AC"]+m["BC"]);
    v.pb(m["A"]+m["BC"]);
    v.pb(m["A"]+m["B"]+m["C"]);
    v.pb(m["B"]+m["AC"]);
    v.pb(m["C"]+m["AB"]);
    ll min=400000;
    for(ll i=0;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    if(min<400000)
          cout<<min;
    else
          cout<<-1;

return 0;
}