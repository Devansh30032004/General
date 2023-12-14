#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==(i+1)){
                count+=1;
            }
        }
        if((count/2)%2==0)
            cout<<count/2<<"\n";
        else
            cout<<(count/2)+1<<"\n";
     }
return 0;
}