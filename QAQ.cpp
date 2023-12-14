#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='Q'){
            for(int j=i;j<s.length();j++){
                if(s[j]=='A'){
                    for(int k=j;k<s.length();k++){
                        if(s[k]=='Q'){
                            count+=1;
                        }
                    }
                }
            }
        }
    }cout<<count;
}