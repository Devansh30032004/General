#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=2;
    for(int j=0;j<(n-1);j++){
        int p=(arr[j]+d);
        int q=arr[j+1]-d;
        if((arr[j+1]-p)>=d)
            count+=1;
        if(q-arr[j]>=d && p!=q)
            count+=1;
    }        
    cout<<count; 
}