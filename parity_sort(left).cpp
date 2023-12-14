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
            arr[i]=brr[i];
        }
        if(n==1){
            cout<<"YES"<<"\n";
        }else{
            sort(brr,brr+n);
            int ch=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2!=brr[i]%2){
                    ch=1;
                }
            }
            if(ch==0){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        } 
    }

return 0;
}