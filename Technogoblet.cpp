#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    int crr[k];
    for(int i=0;i<k;i++){
        cin>>crr[i];
    }
    vector<vector<int>>v;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(brr[j]==i+1){
                temp.push_back(arr[j]);
            }
        }
        v.push_back(temp);
        temp.clear();
    }
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end(),greater<int>());
    }
    int count=k;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            if(v[i][0]==arr[crr[j]-1]){
                count--;
            }
        }
    }
    cout<<count;

return 0;
}