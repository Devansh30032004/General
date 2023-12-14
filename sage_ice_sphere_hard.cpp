#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll brr[n],j=0;
    for(ll i=1;i<n;i+=2){
        brr[i]=arr[j];
        j+=1;
    }
    for(ll i=0;i<n;i+=2){
        brr[i]=arr[j];
        j+=1;
    }
    ll count=0;
    for(ll i=1;i<n-1;i++){
        if((brr[i]<brr[i-1]) && (brr[i]<brr[i+1])){
            count+=1;
        }
    }
    cout<<count<<"\n";
    for(ll i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

return 0;
}