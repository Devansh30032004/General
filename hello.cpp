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
        ll pos;
        cin>>pos;
        ll n=s.length();
        if(n==1){
              cout<<s;
        }
        else{
        ll i=ceil((float)pos/n);
        ll arr[n];
        for(ll j=0;j<n;j++){
            arr[j]=int(s[j]);
        }
        sort(arr,arr+n);
        if(pos<=n){
            cout<<s[pos-1];
        }
        else if(pos<=(2*n-1)){
            string p="";
            for(ll i=0;i<n;i++){
                if(int(s[i])<=arr[n-1]){
                    p+=s[i];
                }
            }
            cout<<p[pos-n-1];
        }
        else{
        ll ch=arr[i-1];
        ll p=pos-(2*n-((i-2)*(i-1)/2));
        string s1="";
        for(ll i=0;i<n;i++){
            if(int(s[i])<=ch){
                s1+=s[i];
            }
        }
        cout<<s1[p-1];
        }
        }
    }

return 0;
}