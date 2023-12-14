#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
        for(int x=0;x<n-1;x++){
        if(arr[x]>arr[x+1]){
            swap(arr[x+1],arr[x]);
        }
        }
    }
    int count=0;
    for(int k=0;k<n;k++){
        if(arr[k]!=0){
        for(int l=k+1;l<n;l++){
            if(arr[l]!=0){
            if(arr[l]%arr[k]==0){
                  arr[l]=0;
            }
          }
        }count+=1;
        }
    }
    cout<<count;
}

