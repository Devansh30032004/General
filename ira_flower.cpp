#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0,max=0,min=1001;
    for(ll i=0;i<n;i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
        else{
            sum+=arr[i]-1;
        }
        if((arr[i]%2!=0) && (arr[i]<min)){
            min=arr[i];
        }
        if((arr[i]%2==0) && ((arr[i]-1)<min)){
            min=arr[i]-1;
        }

    }
    ll ans;
    if(n%2!=0){
         ans=sum;
    }else{
         ans=sum-min;
         //cout<<min<<" ";
    }
    cout<<ans;


return 0;
}