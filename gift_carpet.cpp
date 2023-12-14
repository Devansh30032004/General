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
        ll n,m;
        cin>>n>>m;
        char  s[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
        ll ch=0;
        char a;
        for(ll j=0;j<m;j++){
            if(ch==0){
                a='v';
            }else if(ch==1){
                a='i';
            }else if(ch==2){
                a='k';
            }else if(ch==3){
                a='a';
            }
            for(ll i=0;i<n;i++){
                if(s[i][j]==a){
                    ch+=1;
                    break;
                }
            }
        }
        if(ch<4){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        } 
    }

return 0;
}