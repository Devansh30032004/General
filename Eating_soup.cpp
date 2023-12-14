#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sol;
    if(m==0){
        cout<<1;
    }else{
        if(m>=(n/2)){
           sol=n-m; 
        }else{
            m=n-m;
            sol=n-m;
        }
        cout<<sol;
    }
}