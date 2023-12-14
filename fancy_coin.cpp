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
     ll m,k,a1,ak;
     cin>>m>>k>>a1>>ak;
     ll coin;
     ll v=m/k;
     if(ak>=v){
      ll g=m-(v*k);
      if(a1>=g){
        coin=0;
      }else{
        coin=g-a1;
      }
     }else{
      ll g=m-(ak*k);
      if(a1<g){
        ll g1=g-a1;
        if(g1%k==0){
          coin=g1/k;
        }else if((g1%k!=0) && ((k-(g1%k))<=a1)){
          coin=(g1/k)+1;
        }else{
          coin=(g1/k)+(g1%k);
        }
      }
      else{
        coin=0;
      }
     }
     cout<<coin<<"\n";
   } 

return 0;
}