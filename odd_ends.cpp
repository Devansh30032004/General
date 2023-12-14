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
    if(n%2==0)
       cout<<"No";
    else{
        if((arr[0]%2==0) || (arr[n-1]%2==0)){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
    }

return 0;
}