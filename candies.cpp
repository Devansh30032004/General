#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
int main()
{
    ll n;
    cin>>n;
    ll cm=0;
    if(n<=42){
    	cout<<1;
    }else{
    if(n%2==0){
        cm=n/2;
    }else{
        cm=(n+1)/2;
    }
    ll lo=1;
    ll hi=n;
    //ll ans=0,wr=0;
    while((hi-lo)>1){
        ll mid=(hi+lo)/2;
        ll k=n-mid,pet=0,vas=mid;
            while(k>0){
                ll g=k/10;
                pet+=g;
                k-=g;
                if(k<mid){
                    vas+=k;
                    k=0;
                }else{
                    k-=mid;
                    vas+=mid;
                }
            }
            if(vas>=cm){
                    hi=mid;
                }else if(pet>=cm){
                    lo=mid;
                }
    }
    
    cout<<hi;
    }


return 0;
}