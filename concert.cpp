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
    }if(n==1){
        cout<<"Win";
    }
    else if(n==2){
        cout<<"Lose";
    }else if(n>=3){
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3==0){
            cout<<"Lose";
        }else{
            cout<<"Win";
        }
    }

return 0;
}