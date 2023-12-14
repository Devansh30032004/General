#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int x=1;
        for(int i=0;i<n/2;i++){
            int arr[n];
            for(int j=0;j<n;j++){
                arr[j]=j+1;
            }
            swap(arr[n-1],arr[n-1-x]);
            for(int l=0;l<(x-1)/2;l++){
                swap(arr[n-x+l],arr[n-2-l]);
            }
            x+=1;
            int sum=0;
            int max=0;
            for(int m=0;m<n;m++){
                if((arr[m]*(m+1))>max){
                    max=arr[m]*(m+1);
                }
                sum+=arr[m]*(m+1);
            }
            //cout<<sum<<" ";
            v.push_back(sum-max);
        }
        int max1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>max1){
                max1=v[i];
            }
        }
        cout<<max1<<"\n";
    }

return 0;
}