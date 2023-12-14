#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char arr[n];
    int mid;
    if(n%2!=0)
       mid=(n+1)/2;
    else
       mid=n/2;
    arr[mid-1]=s[0];
    int j=1,k=1;
    if((n%2)!=0){
    for(int i=2;i<=n;i++){
        if(i%2==0){
            arr[mid-j-1]=s[i-1];
            j++;
        }
        else{
            arr[mid+k-1]=s[i-1];
            k++;
        }
    }
    }else{
        for(int i=2;i<=n;i++){
        if(i%2!=0){
            arr[mid-j-1]=s[i-1];
            j++;
        }
        else{
            arr[mid+k-1]=s[i-1];
            k++;
        }
    } 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}