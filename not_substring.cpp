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
    string s;
    cin>>s;
    
        if((s=="()") && (s.length()==2)){
            cout<<"NO"<<"\n";
        }else if((s[0]==')') && (s[1]=='(')){
            cout<<"YES"<<"\n";
            for(ll i=0;i<s.length();i++){
                cout<<"(";
            }
            for(ll i=0;i<s.length();i++){
                cout<<")";
            }
            cout<<"\n";
        }else if((s[0]=='(') && (s[1]=='(')){
            cout<<"YES"<<"\n";
            for(ll i=0;i<s.length();i++){
                cout<<"()";
            }
            cout<<"\n";
        }else if((s[0]==')') && (s[1]==')')){
            cout<<"YES"<<"\n";
            for(ll i=0;i<s.length();i++){
                cout<<"()";
            }
            cout<<"\n";
        }else if((s[0]=='(') && (s[1]==')')){
            if(s[2]==')'){
                cout<<"YES"<<"\n";
            for(ll i=0;i<s.length();i++){
                cout<<"()";
            }
            cout<<"\n";
            }else{
                cout<<"YES"<<"\n";
            for(ll i=0;i<s.length();i++){
                cout<<"(";
            }
            for(ll i=0;i<s.length();i++){
                cout<<")";
            }
            cout<<"\n";
            }
        }
    
   }
return 0;
}