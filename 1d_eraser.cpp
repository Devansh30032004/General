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
        ll count=0,x=0,ch=0;
        for(ll i=0;i<n;i++){
            if((s[i]=='B') && (ch==0)){
                ch=1;
                x+=1;
            }
            else if(ch==1){
                if(x<k){
                    x+=1;
                }else{
                    if(s[i]=='B'){
                          x=1;
                          ch=1;
                    }else{
                          x=0;
                          ch=0;
                    }
                    count+=1;
                }
            }
        }
        if(x>0){
              count+=1;
        }
        cout<<count<<"\n";
    }

return 0;
}