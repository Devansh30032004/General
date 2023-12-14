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
        ll n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(n==a){
            cout<<"YES"<<"\n";
        }else{
            ll se=a,ch=0,neg=0;
            for(ll i=0;i<q;i++){
                if(s[i]=='+'){
                    se+=1;
                }else{
                    neg+=1;
                }
                if((se-neg)>=n){
                    cout<<"YES\n";
                    ch=1;
                    break;
                }
            }
            if(ch==0){
            if((se-neg)>=n){
                cout<<"YES"<<"\n";
            }else if((se>=n) && ((se-neg)<n)){
                cout<<"MAYBE\n";
            }else{
                cout<<"NO\n";
            }
            }
        }
    }

return 0;
}