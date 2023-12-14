#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int p=int('(');
    int q=int(')');
    int go=s.length()-1;
    string s1="";
    for(int i=0;i<s.length();i++){
        if(int(s[i])==p){
            for(int j=go;j>i;j--){
                if(int(s[j])==q){
                    v.push_back(i+1);
                    v.push_back(j+1);
                    go=j-1;
                    break;
                }
            }
        }
    }
    int op=v.size();
    if(op==0){
        cout<<0;
    }
    else{
        cout<<1<<"\n";
        cout<<op<<"\n";
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }

return 0;
}