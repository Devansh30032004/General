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
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        ll ch=0;
        for(ll i=0;i<s1.length()-1;i++){
            if(((s1[i]==s2[i]) && (s1[i]=='0')) && ((s1[i+1]==s2[i+1]) && (s1[i+1]=='1'))){
                ch=1;
            }
        }
        if(ch==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

return 0;
}