#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int count=0,sum=1,ch=0;
    while(sum<=n){
        count+=1;
        if(sum==n){
            ch=1;
            break;
        }
        sum+=k;
    }
    if(ch==0){
        cout<<count+1<<"\n";
    }else{
        cout<<count<<"\n";
    }
  }  
}