#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,coin=0;
    char a=s[0];
    for(int i=0;i<n;i++){
        if(a=='U'){
            if(s[i]=='U'){
                y+=1;
            }
            if(s[i]=='R'){
                x+=1;
            }
            if(x>y){
                coin+=1;
                a='R';
            }
        }
        else if(a=='R'){
            if(s[i]=='U'){
                y+=1;
            }
            if(s[i]=='R'){
                x+=1;
            }
            if(x<y){
                coin+=1;
                a='U';
            }
        }
    }
    cout<<coin;

return 0;
}