#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        if((i+1)%2!=0){
            cout<<arr[n-i-1];
        }else{
            cout<<arr[i];
        }
    }
    

return 0;
}