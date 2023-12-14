#include<bits/stdc++.h>
using namespace std;

int count(int *arr,int n,int a);

int count(int *arr,int n,int a){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==a)
            count+=1;
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,p,max=0;
    for(int i=0;i<n;i++){
        s=count(arr,n,-1);
        p=count(arr,n,1);
        for(int j=i;j<n;j+=k){
            if(arr[j]==1)
                p-=1;
            else
                s-=1;
        }
        for(int j=i-k;j>=0;j-=k){
            if(arr[j]==1)
                p-=1;
            else
                s-=1;
        }
        int d=abs(s-p);
        if(d>max)
            max=d;
    }
    cout<<max;
}