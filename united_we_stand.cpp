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
        vector<int> b;
        vector<int> c;
        sort(arr,arr+n);
        b.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[0]){
                b.push_back(arr[i]);
            }
            else if(arr[0]%arr[i]==0){
                b.push_back(arr[i]);
            }
            else{
                c.push_back(arr[i]);
            }
        }
        if(c.size()==0){
            cout<<-1<<"\n";
        }
        else{
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }cout<<"\n";
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }cout<<"\n";
        }

    }

return 0;
}
