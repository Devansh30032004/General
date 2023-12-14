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
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                v.push_back(arr[i]);
            }
        }
        int max=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        if(max>0){
            cout<<max<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }

return 0;
}