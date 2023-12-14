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
    if(n%2==0){
        cout<<(n/2)-1<<"\n";
    }else{
        cout<<(n/2)<<"\n";
    }
    for(ll i=0;i<n;i++){
        swap(arr[i],arr[i+1]);
        i+=1;
    }
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

return 0;
}