#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int co;
    if(n%2!=0){
        co=(n+1)/2;
    }
    else{
        co=n/2;
    }
   // cout<<co<<"\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int> arr1;
    int m=arr[0],count=0,j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            count+=1;
        }
        else{
            m=arr[i];
            //cout<<"yes"<<count;
            arr1.push_back(count);
            j+=1;
            count=1;
        }
    }
    arr1.push_back(count);
    sort(arr1.begin(),arr1.end(),greater<int>());
    //for(int i=0;i<(j+1);i++){
         // cout<<arr1[i]<<" ";
    //}
    int get=0,n1=0,ex=0;
    for(int i=0;i<(j+1);i++){
        n1=ceil((double)arr1[i]/2);
        get+=n1;
    }
    ex=get-co;
    cout<<n-ex;
return 0;
}
