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
    ll l,r;
    cin>>l>>r;
    if(l==1){
        cout<<l<<" "<<l+1<<"\n";
    }else{
        cout<<l<<" "<<2*l<<"\n";
    }
   } 

return 0;
}