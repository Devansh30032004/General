#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ch=0,count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            ch=1;
        }
        if((s[i]=='0') && (ch==1)){
            count+=1;
        }
    }
    if(count>=6){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

return 0;
}