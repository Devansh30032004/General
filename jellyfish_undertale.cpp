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
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=min(arr[i],a-1);
        }
        cout<<sum+b<<"\n";
    }

return 0;
}