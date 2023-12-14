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
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }if(n==1){
              cout<<arr[0]+x<<"\n";
        }else{
        sort(arr,arr+n);
        ll hi=max(x+arr[n-1],arr[n-1]),lo=1,ans=0,mid=0;
        while(hi-lo>1){
            mid=(hi+lo)/2;
            ll h=0;
            for(ll i=0;i<n;i++){
                if(arr[i]<=mid){
                    h+=abs(arr[i]-mid);
                }
            }
            if(h>x){
                hi=mid;
            }else if(h<x){
                ans=mid;
                lo=mid;
            }else{
                ans=mid;
                break;
            }
        }
        if(ans>0)
            cout<<ans<<"\n";
        else
            cout<<1<<"\n";
        }
    }

return 0;
}