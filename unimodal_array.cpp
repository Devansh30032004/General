#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ch=arr[1]-arr[0];
    int ch1=0;
    if(n==1){
        cout<<"Yes";
    }else{
        for(int i=1;i<n-1;i++){
            if((ch<0) && ((arr[i+1]-arr[i])==0)){
                   cout<<"No";
                   ch1=1;
                   break;
            }
            else if((ch<0) && ((arr[i+1]-arr[i])>0)){
                   cout<<"No";
                   ch1=1;
                   break;
            }
            else if((ch==0) && ((arr[i+1]-arr[i])>0)){
                   cout<<"No";
                   ch1=1;
                   break;
            }
            else{
                   ch=arr[i+1]-arr[i];
            }
        }
        if(ch1==0){
            cout<<"Yes";
        }
    }

return 0;
}