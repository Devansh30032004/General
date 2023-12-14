#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ch=0;
    if(s.length()<3){
        cout<<"No";
    }
    else{
    for(int i=0;i<s.length()-2;i++){
        if(s[i]!='.'){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i+2]!=s[i]){
                if(s[i+1]!='.' && s[i+2]!='.'){
                    ch=1;
                    cout<<"Yes";
                    break;
                }
            }
        }
    }if(ch==0){
        cout<<"No";
    }
    }
}