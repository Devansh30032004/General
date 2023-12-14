#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==k){
        cout<<s;
    }else{
        ll c=0,c1=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='('){
                c++;
            }else{
                c1++;
            }
        }
        ll c2=0,c3=0,req=k/2;
        //cout<<req<<"\n";
        for(ll i=0;i<n;i++){
            if((s[i]=='(') && (c2<req)){
                ++c2;
                //cout<<c2<<" ";
                cout<<s[i];
            }else if(((s[i]==')') && (c2>0)) && (c3<req)){
                ++c3;
                //cout<<c3<<" ";
                cout<<s[i];
            }
        }
    }

return 0;
}