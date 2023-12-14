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
    ll min=100001;
    for(ll i=0;i<n;i++){
        if(abs(arr[i])<min){
            min=abs(arr[i]);
        }
    }
    cout<<min;


return 0;
}