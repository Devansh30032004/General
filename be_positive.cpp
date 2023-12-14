#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1;
    if(n%2==0)
       n1=n/2;
    else
       n1=(n/2)+1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int neg=0,pos=0;
    for(int ch : arr){
        if(ch>0)
            pos+=1;
        else if(ch<0)
            neg+=1;
    }
    if(neg>=n1)
        cout<<-1;
    else if(pos<n1 && neg<n1)
        cout<<0;
    else
        cout<<1;

}