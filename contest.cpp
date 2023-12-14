#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1=s;
        ll pos;
        cin>>pos;
        ll n=s.length();
        ll arr[n];
        ll b=n;
        arr[0]=b;
        for(ll i=1;i<n;i++){
            b+=(n-i);
            arr[i]=b;
        }
        ll y=0;
        ll x=0;
        if(pos<=arr[0]){
            x=0;
            y=pos;
            cout<<s[y-1];
        }
        else{
            for(ll i=1;i<n;i++){
                if((pos<=arr[i]) && (pos>arr[i-1])){
                    x=i;
                    y=pos%arr[i-1];
                }
            }
            vector<ll> v;
            ll flag=1;
            for(ll i=0;i<n-1 && flag<n-1;i++){
                if(int(s[i])>int(s[i+1])){
                    for(ll j=0;j<flag;j++){
                        v.pb(i-j);
                    }
                    flag=1;
                }
                else if(int(s[i])==int(s[i+1])){
                    flag+=1;
                }
                else{
                    flag=1;
                }
            }
            if(x<=v.size()){
                for(ll i=0;i<n && x>0;i++){
                    s[v[i]]='0';
                    x--;
                }
                for(ll i=0;i<n && y>0;i++){
                    if(s[i]!='0'){
                        if(y>1){
                            y--;
                        }
                        else if(y==1){
                            cout<<s[i];
                            y--;
                        }
                    }
                }
            }
            else{
                for(ll i=0;i<v.size();i++){
                    s[v[i]]='0';
                }
                ll c=n-1;
                while((x-v.size()) && (c>0)){
                    if(s[c]!='0'){
                        s[c]='0';
                        c--;
                        x--;
                    }
                }
                for(ll i=0;i<n && y>0;i++){
                    if(s[i]!='0'){
                        if(y>1){
                            y--;
                        }
                        else if(y==1){
                            cout<<s[i];
                            y--;
                        }
                    }
                }
            }
        }

    }

return 0;
}