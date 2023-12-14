#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    int count=0,count1=0;
    for(int i=l;i<=r;i++){
        if(i%2==0){
            count+=1;
        }
        if(i%3==0){
            count1+=1;
        }
    }if(count1>=count && count!=0)
         cout<<3;
     else if(count>count1)
         cout<<2;
     else
         cout<<l;
}