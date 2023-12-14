#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,a;
    cin>>l>>r>>a;
    int min=0,max=0;
    if(l>r){
        min=r;
        max=l;
    }
    else{
        min=l;
        max=r;
    }
    int diff=max-min;
    if(diff==0){
          if(a%2==0){
                max+=(a/2);
                min+=(a/2);
          }else{
                max+=((a-1)/2);
                min+=((a-1)/2);
          }
    }else{
          if(a>diff){
                min+=diff;
                int im=a-diff;
                if(im%2!=0){
                      max+=(im-1)/2;
                      min+=(im-1)/2;
                }else{
                      max+=im/2;
                      min+=im/2;
                }
                
          }else{
                min+=a;
                max-=(diff-a);
          }
    }
    cout<<(max+min);
}