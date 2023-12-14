#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,m;
        cin>>a>>b>>m;
        if((m+1)%3==0)
            cout<<(a ^ b)<<"\n";
        else if((m+1)%3==1)
            cout<<a<<"\n";
        else
            cout<<b<<"\n";
    }
}