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
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    sort(arr,arr+n);
    float get=4.5*n;
    if(sum>=get){
        cout<<0;
    }
    ll count=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<5){
            sum+=(5-arr[i]);
            count+=1;
            if(sum>=get){
                cout<<count;
                break;
            }
        }
    }
return 0;
}