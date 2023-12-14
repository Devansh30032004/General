#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        if((c+h)<(b-1)){
            cout<<2*(c+h)+1<<"\n";
        }else{
            cout<<2*b-1<<"\n";
        }
    }

return 0;
}