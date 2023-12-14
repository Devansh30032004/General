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
        int sum=arr[0];
        int count=0;
        for(int i=1;i<n;i++){
            sum=sum&arr[i];
            if(sum==0){
                sum=arr[i+1];
                i++;
                count+=1;
            }
        }
        if(count==0)
           cout<<1<<"\n";
        else
           cout<<count<<"\n";
    }

return 0;
}