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
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll brr[n];
        if(arr[0]!=1){
            brr[0]=1;
        }else{
            brr[0]=2;
        }
        for(ll i=1;i<n;i++){
            if(arr[i]!=brr[i-1]+1){
                brr[i]=brr[i-1]+1;
            }else{
                brr[i]=brr[i-1]+2;
            }
        }
        cout<<brr[n-1]<<"\n";
    }

return 0;
}