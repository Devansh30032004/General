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
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n],brr[m];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<m;i++){
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+m);
        ll sum1=0,sum2=0;
        if(brr[m-1]>arr[0]){
            swap(brr[m-1],arr[0]);
        }
        sort(arr,arr+n);
        sort(brr,brr+m);
        for(ll i=0;i<n;i++){
            sum1+=arr[i];
        }
        ll ch=0;
        if(k%2==0){
            //cout<<brr[0]<<" "<<arr[n-1]<<" ";
            swap(brr[0],arr[n-1]);
            //cout<<brr[0]<<" "<<arr[n-1]<<" ";
            for(ll i=0;i<n;i++){
                sum2+=arr[i];
            }
            //cout<<sum2<<" ";
            ch=1;
        }
        if(ch==0){
            cout<<sum1<<"\n";
        }else{
            cout<<sum2<<"\n";
        }
    }

return 0;
}