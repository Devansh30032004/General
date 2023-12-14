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
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll arr1[n-1];
        for(ll i=0;i<n-1;i++){
            arr1[i]=abs(arr[i+1]-arr[i]);
        }
        sort(arr1,arr1+(n-1));
        ll sum=0;
        for(ll i=0;i<(n-k);i++){
            sum+=arr1[i];
        }
        cout<<sum<<"\n";
    }

return 0;
}