#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<=n;j++){
        arr1[j-1]=j;
    }
    int ch=0;
    for(int k=0;k<n;k++){
        int l=arr[k];
        int m=arr[l-1];
        int n=arr[m-1];
        if(n==arr1[k]){
            ch=1;
            cout<<"YES";
            break;
        }
    }
    if(ch==0){
        cout<<"NO";
    }
}