#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back




bool check(ll n){
    ll a=2;
    if(n==1)
        return 0;
    if(n==3)
        return 1;
    while(a<=sqrt(n)){
        if(n%a==0){
            return 0;
        }
        a+=1;
    }
    return 1;
}

ll give(ll n){
    ll a=2,v=0;
    while(a<=sqrt(n)){
        if(n%a==0){
            v=a;
            a+=1;
        }else{
            a+=1;
        }
        
    }
    return v;
}


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll c1=0,c2=0;
        vector<ll> v;
        v.pb(n);
        while(n!=1){
            if(n%2==0){
                if(!check(n/2)){
                    n=n/2;
                    v.pb(n);
                }else{
                    if(c2<=2){
                        n=n-2;
                        c2+=1;
                        v.pb(n);
                    }else{
                        ll g=give(n);
                        n=n-g;
                        v.pb(n);
                    }
                }
            }else if(check(n)){
                n=n-1;
                v.pb(n);
            }else{
                ll g=give(n);
                n=n-g;
                v.pb(n);
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