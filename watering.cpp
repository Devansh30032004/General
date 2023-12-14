#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int count=0;
    int arr1[n-1];
    for(int i=0;i<n-1;i++){
        arr1[i]=arr[i+1];
    }
    sort(arr1,arr1+(n-1),greater<int>());
    for(int i=0;i<(n-1);i++){
        float a=(float)arr[0]/sum;
        if((a*A)>=B){
            break;
        }else{
            sum-=arr1[i];
            count+=1;
        }
    }
    cout<<count;

return 0;
}