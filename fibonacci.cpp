#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int a=0,b=1,c;
    int arr[8]={0,1};
    for (int i=2;i<n;i++){
            c=a+b;
            arr[i]=c;
            a=b;
            b=c;
    }for (int x: arr){
        cout<<x<<" ";
    }
return 0;
}