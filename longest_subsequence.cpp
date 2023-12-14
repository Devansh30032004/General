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
        sort(arr,arr+n);
        ll count=0,f=-1;
        for(ll i=0;i<n;i++){
            if(arr[i]!=f){
                count+=1;
                f=arr[i];
            }
        }
        cout<<count<<"\n";
    }

return 0;
}