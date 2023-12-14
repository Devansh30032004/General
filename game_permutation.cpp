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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll q=arr[0]+1,count=0,ch=0,ch1=n+1;
    for(ll i=1;i<n;i++){
        if((arr[i]>q) && (arr[i]<ch1)){
            ch1=arr[i];
            count+=1;
        }else if(arr[i]==q){
            ch=1;
            ch1=arr[i];
            count+=1;
        }else if(arr[i]<(q-2)){
            q=arr[i]+1;
            ch=0;
        }
    }
    cout<<count<<"\n";
   } 

return 0;
}