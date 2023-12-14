#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=(n*(n-1))/2;
        int arr[p];
        for(int i=0;i<p;i++){
            cin>>arr[i];
        }
        sort(arr,arr+p);
        vector<pair<int,int>> v;
        int count=1;
        int i=0;
        int d=arr[i];
        if(p==1){
            v.push_back({arr[i],count});  
        }else{
        for(i=1;i<p;i++){
            if(arr[i]==d){
                count+=1;
            }
            else{
                v.push_back({arr[i-1],count});
                d=arr[i];
                count=1;
            }
          }
          v.push_back({d,count});
        }
        vector<int> v1;
        int k=0;
        for(int i=0;i<n;i++){
            if(k>v.size()-1){
                v1.push_back(arr[p-1]);
            }else{
                if(v[k].second>(n-i-1)){
                int sum=n-i-1;
                while(sum<v[k].second){
                      v1.push_back(v[k].first);
                      i+=1;
                      sum+=(n-i-1);
                }
                v1.push_back(v[k].first);
                k+=1;
            }else{
                  v1.push_back(v[k].first);
                  k+=1;
            }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
    }

return 0;
}