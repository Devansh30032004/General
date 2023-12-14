#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int x,y;
    cin>>x>>y;
    long long int row1,row2,col1,col2;
    row1=x-1;
    col1=y-1;
    row2=n-x;
    col2=n-y;
    if((row1+col1)<(row2+col2)){
        cout<<"White";
    }else if((row1+col1)>(row2+col2)){
        cout<<"Black";
    }else{
        cout<<"White";
    }
}