#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int count=0;
    if(s>n){
        int c=s/n;
        count+=c;
        s-=(c*n);
        if(s!=0)
           count+=1;
    }
    else{
        count+=1;
    } 
    cout<<count;   
}