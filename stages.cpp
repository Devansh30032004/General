#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[n],temp;
    for(int i=0;i<n;i++){
        arr[i]=int(s[i])-96;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sum=arr[0],count=1,temp1=arr[0];
    for(int i=1;i<n;i++){
        if(count==k)
            break;
        if((arr[i]-temp1)>1){
            temp1=arr[i];
            count+=1;
            sum+=arr[i];
        }
    }if(count==k)
         cout<<sum;
     else{
        cout<<-1;
     }
}