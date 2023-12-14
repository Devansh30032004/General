#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ch=0,p,q,diff;
    for(int i=0;i<2;i++){
        if(s[i]!=s[5-i-1]){
            ch=1;
        }
    }
    if(ch==0){
        cout<<0;
    }
    else{
        p=(((int)s[3])*10) +(int)s[4];
        q=(((int)s[1])*10) +(int)s[0];
        diff=q-p;
        if(diff<0){
            diff=720+diff;
        }
        if((s[0]=='2') && (s[1]=='3')){
            int diff1=60-p;
            if(diff1<diff){
                cout<<diff1;
            }
        } 
        
    }

return 0;
}