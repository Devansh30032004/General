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
        if(s[0]=='1'){
            cout<<13<<"\n";
        }
        else if(s[0]=='2'){
            cout<<23<<"\n";
        }
        else if(s[0]=='3'){
            cout<<31<<"\n";
        }
        else if(s[0]=='4'){
            cout<<41<<"\n";
        }
        else if(s[0]=='5'){
            cout<<53<<"\n";
        }
        else if(s[0]=='6'){
            cout<<61<<"\n";
        }
        else if(s[0]=='7'){
            cout<<71<<"\n";
        }
        else if(s[0]=='8'){
            cout<<89<<"\n";
        }else{
            cout<<97<<"\n";
        }

    }

return 0;
}