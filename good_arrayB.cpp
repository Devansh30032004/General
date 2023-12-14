#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        if(n==1){
            cout<<"NO"<<"\n";
        }
        else{
            long long int count1=0,sum=0;
            for(int i=0;i<n;i++){
                if(arr[i]>=2){
                    sum+=arr[i];
                }
                else if(arr[i]==1){
                    count1+=1;
                    sum+=arr[i];
                }
                
            }
            //cout<<sum<<" "<<count1;
            if(sum>=(n+count1)){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }

return 0;
}