#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int r[n],c[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    long long int sum=0;
    for(int ch : r){
        sum+=ch;    
    }
    long long int max=0,max1=0;
    for(int i=0;i<n;i++){
        if(c[i]>max)
            max=c[i];
    }int ch=0;
    for(int i=0;i<n;i++){
        if(c[i]!=max){
        if(c[i]>max1)
            max1=c[i];
        }else{
            ch+=1;
            if(ch>1){
                max1=c[i];
                break;
            }
        }
    }
    if((max+max1)>=sum)
         cout<<"Yes";
    else
         cout<<"No";
}