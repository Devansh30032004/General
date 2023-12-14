#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<k;i++){
            int max=0,ind=0;
            for(int j=0;j<n-1;j++){
                if((arr[j]<=arr[j+1]) && (arr[j]>max)){
                    //cout<<"y";
                    max=arr[j];
                    ind=j;
                }
            }
            if(max==0){
                break;
            }
            arr[ind]+=1;
            //cout<<ind<<" ";
        }
        int max1=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max1){
                max1=arr[i];
            }
        }
        cout<<max1<<"\n";
    }

return 0;
}