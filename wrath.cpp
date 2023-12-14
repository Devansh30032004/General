#include <bits/stdc++.h>
using namespace std;

int arr[10000000]={0};
int brr[10000000]={0};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1,knife=n-arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(i<knife){
            count++;
        }
        knife=min(knife,((i+1)-arr[i]));
    }
    cout<<count;
return 0;
}