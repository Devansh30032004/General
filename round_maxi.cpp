#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        cout<<0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int ch=0;
        for(int i=n-1;i>0;i--){
            if(int(s[i])<53){
                continue;
            }
            else{
                s[i-1]=char(int(s[i-1])+1);
                s[i]=0;
                ch=i;
            }
        }
        if(int(s[0])>=53){
            s[0]='0';
            for(int i=1;i<n;i++){
                s[i]='0';
            }
        }
        if(ch==0){
              ch=n;
        }
        if(s[0]=='0'){
            cout<<1<<s<<"\n";
        }else{
            for(int i=0;i<ch;i++){
                  cout<<s[i];
            }
            for(int i=ch;i<n;i++){
                  cout<<'0';
            }
            cout<<"\n";
        }
    
    }
return 0;
}