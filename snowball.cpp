#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,h;
    cin>>w>>h;
    int u1,d1;
    cin>>u1>>d1;
    int u2,d2;
    cin>>u2>>d2;
    for(int i=h;i>=0;i--){
        if(w<0){
            w=0;
        }
        w+=i;
        if(i==d1){
            w-=u1;
        }
        else if(i==d2){
            w-=u2;
        }
    }if(w>=0)
         cout<<w;
     else
         cout<<0;
}