#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        int arr2[arr[i].length()];
        int j=0;
        for(int j=0;j<arr[i].length();j++){
            arr2[j]=(int(arr[i][j])-96);
        }
        int p=0,sum=0;
        sort(arr2,arr2+arr[i].length());
        for(int l=0;l<arr[i].length();l++){
            if(arr2[l]!=p){
                p=arr2[l];
                int q=pow(2,arr2[l]);
                sum=sum | q;
            }
        }
        arr1[k]=sum;
        k+=1;
    }
    int count=0;
    sort(arr1,arr1+n);
    for(int i=0;i<n-1;i++){
        if(arr1[i]!=arr1[i+1]){
            count+=1;
        }
    }
    cout<<(count+1);
}