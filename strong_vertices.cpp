#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        int count=0;
        int crr[n];
        for(int i=0;i<n;i++){
            crr[i]=arr[i]-brr[i];
        }
        int max=-2000000001;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(crr[i]>max){
                max=crr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(crr[i]==max){
                count+=1;
                v.push_back(i+1);
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

return 0;
}