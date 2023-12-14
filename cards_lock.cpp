#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==0){
        cout<<0;
    }
    else{
        int sum=0;
        for(int i=1;i<arr[0]-1;i++){
            sum+=arr[i];
        }
        
    }

return 0;
}