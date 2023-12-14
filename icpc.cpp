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
        ll a=1;
        for(ll i=0;i<k;i++){
            if((s[i]=='U') && (a!=n)){
                a+=1;
            }
            if((s[i]=='U') && (a==n)){
                a=1;
            }
            if((s[i]=='S') && ((a!=n-1) || (a!=n))){
                a+=2;
            }
            if((s[i]=='S') && (a==n-1)){
                a=1;
            }
            if((s[i]=='S') && (a==n)){
                a=2;
            }
            if((s[i]=='R') && (a!=1)){
                a-=1;
            }
            if((s[i]=='R') && (a==1)){
                a=n;
            }
        }
        cout<<a<<"\n";

    }

return 0;
}