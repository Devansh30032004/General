#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v;
    cin>>n>>v;
    int price=0;
    int ch=0;
    if(n>v){
          price+=v;
    }else{
          price+=(n-1);
          ch=1;
    }
    int i=2;
    if(ch==0){
        while(i<=(n-v)){
          price+=i;
          i+=1;
      }
    }
    cout<<price;
}