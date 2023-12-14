#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll int arr[200000];

int main()
{
    ll int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if((n==1) && (k>0))
       cout<<0;
    else if(k==0)
       cout<<s;
    else{
        int i=0;
        for(int i=0;i<n;i++){
            arr[i]=int(s[i])-48;
        }
        int j=0;
        for(int i=0;i<k;i++){
            if(j<=n-1){
                if(j==0){
                    if(arr[j]!=1)
                          arr[j]=1;
                    else
                          i--;
                }
                else if(j>0){
                    if(arr[j]==0)
                        i--;
                    else
                        arr[j]=0;
                }
                j++;
            }
            else{
                break;
            }
        }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    }
return 0;
}