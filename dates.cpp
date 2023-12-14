#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

void print(string s){
    ll ch=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='.'){
            ch=1;
            break;
        }else if(s[i]=='/'){
            ch=2;
            break;
        }
    }
    vector<char> c;
    vector<char> d;
    if(ch==1){
        ll count=0,f=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]!='.'){
                count+=1;
                c.pb(s[i]);
            }else{
                if((count<2) && (f<2)){
                    cout<<0;
                    d.pb('0');
                }
                for(ll i=0;i<c.size();i++){
                    cout<<c[i];
                    d.pb(c[i]);
                }
                cout<<".";
                d.pb('/');
                f+=1;
                count=0;
                c.clear();
            }
        }
        if((f==2) && (count<4)){
            for(ll i=0;i<(4-count);i++){
                cout<<0;
                d.pb('0');
            }
        }
        for(ll i=0;i<c.size();i++){
            cout<<c[i];
            d.pb(c[i]);
        }
        c.clear();
        cout<<" ";
        for(ll j=3;j<6;j++){
            cout<<d[j];
        }
        for(ll j=0;j<3;j++){
            cout<<d[j];
        }
        for(ll j=6;j<10;j++){
            cout<<d[j];
        }

    }else if(ch==2){
        ll count=0,f=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]!='/'){
                count+=1;
                c.pb(s[i]);
            }else{
                if((count<2) && (f<2)){
                    d.pb('0');
                }
                for(ll i=0;i<c.size();i++){
                    d.pb(c[i]);
                }
                d.pb('.');
                f+=1;
                count=0;
                c.clear();
            }
        }
        if((f==2) && (count<4)){
            for(ll i=0;i<(4-count);i++){
                d.pb('0');
            }
        }
        for(ll i=0;i<c.size();i++){
            d.pb(c[i]);
        }
        c.clear();
        for(ll j=3;j<6;j++){
            cout<<d[j];
        }
        for(ll j=0;j<3;j++){
            cout<<d[j];
        }
        for(ll j=6;j<10;j++){
            cout<<d[j];
        }
        cout<<" ";
        for(ll j=0;j<3;j++){
            if(d[j]=='.'){
                cout<<"/";
            }else{
                cout<<d[j];
            }  
        }
        for(ll j=3;j<6;j++){
            if(d[j]=='.'){
                cout<<"/";
            }else{
                cout<<d[j];
            }
        }
        for(ll j=6;j<10;j++){
            if(d[j]=='.'){
                cout<<"/";
            }else{
                cout<<d[j];
            }
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    vector<string> v;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        v.pb(s);
    }
    for(ll i=0;i<n;i++){
        print(v[i]);
        cout<<"\n";
    }
    
    

return 0;
}