#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

double eps=1e-7;

double root(double x,double y){
   double lo=1;
   double hi=x;
   double mid;
   while(hi-lo>y){
      mid=(hi+lo)/2;
      if((mid*mid)<x){
         lo=mid;
      }else{
         hi=mid;
      }
   }
   return hi;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll sq=sqrtl(1+8*x);
        //cout<<sq<<"\n";
        ll a=(1ll+sq)/2;
        ll pro=(a*(a-1))/2;
        ll y=x-pro;
        cout<<a+y<<"\n";
        
    }

return 0;
}