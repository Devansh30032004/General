#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[3],min=101,sum=0,min1;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    if(a<b){
        min1=a;
    }else{
        min1=b;
    }
    for(int i=0;i<3;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(n==1){
        cout<<0;
    }
    else{
        sum=min1;
        sum+=(n-2)*min;
        cout<<sum;
    }
}