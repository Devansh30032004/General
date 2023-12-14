#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

int main()
{
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll kmax,kmin;
    sort(arr,arr+n);
    kmax=arr[n-1]+m;
    ll m1=m;
    ll count=n;
    for(ll i=0;i<n;i++){
        if((arr[n-1]-arr[i])>0){
        if((arr[n-1]-arr[i])<=m1){
              m1-=(arr[n-1]-arr[i]);
            arr[i]+=(arr[n-1]-arr[i]);
        }else{
            arr[i]+=m1;
            m1=0;
        }
        }else{
            ll dif=ceil((double)m1/count);
            //cout<<m1<<" "<<dif<<"\n";
            arr[i]+=dif;
            count--;
            m1-=dif;
        }
    }
    ll max=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        //cout<<arr[i]<<" ";
    }
    //cout<<"\n";
    kmin=max;
    cout<<kmin<<" "<<kmax;

return 0;
}