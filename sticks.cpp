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
    sort(arr,arr+n);
    int price[100],l=0;
    int t[100],m=0;
    for(int i=arr[0];i<=arr[n-1];i++){
        int p=0;
        t[m]=i;
        m+=1;
        for(int j=0;j<n;j++){
            if(arr[j]>i){
                p+=abs(i+1-arr[j]);
            }
            else if(arr[j]<i){
                p+=abs(i-1-arr[j]);
            }
        }
        price[l]=p;
        l+=1;
    }
    int min=price[0],q=0;
    for(int i=0;i<l;i++){
        if(price[i]<min){
            min=price[i];
            q=i;
        }
    }
    cout<<t[q]<<" "<<min;
    
return 0;
}