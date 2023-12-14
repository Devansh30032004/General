#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        if(a.first>b.first)
            return true;
        return false;
    }else{
        if(a.second<b.second)
             return true;
        return false;
    }
}

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
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                arr[i]=k;
            }else if(arr[i]%k!=0){
                arr[i]=arr[i]%k;
            }
        }
        int brr[n];
        for(int i=0;i<n;i++){
            brr[i]=i+1;
        }
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(arr[i],brr[i]));
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" ";
        }
        cout<<"\n";
    }

return 0;
}