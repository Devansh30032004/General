#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll xa,xb;
        cin>>xa>>xb;
        ll ya,yb;
        cin>>ya>>yb;
        ll za,zb;
        cin>>za>>zb;
        ll bl=1;
        ll c1=xa-ya,c2=xa-za,c3=xb-yb,c4=xb-zb;
        if(c1*c2<0){
            if(c3*c4<0){
                bl+=0;
            }else{
                bl+=min(abs(c3),abs(c4));
            }
        }else{
            if(c3*c4<0){
                bl+=min(abs(c1),abs(c2));
            }else{
                bl+=(min(abs(c1),abs(c2))+min(abs(c3),abs(c4)));
            }
        }
        cout<<bl<<"\n";
    }

return 0;
}