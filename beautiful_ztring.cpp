#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ch=0;
        if(s[0]=='?'){
            if(s[1]!='a'){
                  s[0]='a';
                  ch=1;
            }else if(s[1]!='b'){
                  s[0]='b';
                  ch=1;
            }else if(s[1]!='c'){
                  s[0]='c';
                  ch=1;
            }else{
                  s[0]='a';
                  ch=1;
            }
        }
        for(int i=1;i<s.length();i++){
            if(s[i]=='?' && ((s[i-1]!='a') && (s[i+1]!='a'))){
                s[i]='a';
                ch=1;
            }
            else if(s[i]=='?' && ((s[i-1]!='b') && (s[i+1]!='b'))){
                s[i]='b';
                ch=1;
            }
            else if(s[i]=='?' && ((s[i-1]!='c') && (s[i+1]!='c'))){
                s[i]='c';
                ch=1;
            }
            else if(s[i]==s[i-1]){
                  ch=0;
                  break;
            }
            else
                continue;
        }
        if(ch==1)
            cout<<s<<"\n";
        else
            cout<<-1<<"\n";
    }
return 0;
}