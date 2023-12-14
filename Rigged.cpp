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
      ll arr[n],brr[n];
      for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        arr[i]=x;
        brr[i]=y;
      } 
      ll s=arr[0],e=brr[0],ch=0;
      for(ll i=1;i<n;i++){
        if((arr[i]>=s) && (brr[i]>=e)){
            ch=1;
            break;
        }
      } 
      if(ch==0){
        cout<<s<<"\n";
      }else{
        cout<<-1<<"\n";
      }
    }

return 0;
}