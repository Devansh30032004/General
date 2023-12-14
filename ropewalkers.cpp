#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int time=0;
    int max,mid,min;
    if(a>b && a>c){
          if(b>c){
                max=a;
                mid=b;
                min=c;
          }else{
                max=a;
                mid=c;
                min=b;
          }
    }else if(b>a && b>c){
          if(a>c){
                max=b;
                mid=a;
                min=c;
          }else{
                max=b;
                mid=c;
                min=a;
          }
    }else{
          if(a>b){
                max=c;
                mid=a;
                min=b;
          }else{
                max=c;
                mid=b;
                min=a;
          }
    }
    
    if(abs(a-b)>=d && abs(b-c)>=d && abs(a-c)>=d)
        cout<<0;
    else{
        int a1=d-abs(max-mid);
        int a2=d-abs(mid-min);
        if(a1>0)
           time+=a1;
        if(a2>0)
           time+=a2;
        cout<<time;
    }
}