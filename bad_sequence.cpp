#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   if(s==""){
    cout<<"YES";
   }
   ll p=int('(');
   ll q=int(')');
   ll count=0,count1=0;
   for(int i=0;i<n;i++){
    if(int(s[i])==p){
        count+=1;
    }
    else{
        count1+=1;
    }
   }
   if(count!=count1){
    cout<<"NO";
   }else{
    int ch=0,c=0,c1=0,err=0;
    for(int i=0;i<n;i++){
        if(int(s[i])==p){
            c+=1;
            ch=1;
        }else if((int(s[i])==q) && (c>0)){
            c1+=1;
        }else{
            err+=1;
        }
    }if(((c-c1==0) && (err<=1)) && (ch==1)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
   } 

return 0;
}
