#include <bits/stdc++.h>
using namespace std;

bool fib(int mid,int n,int k){
    int m=n;
    int temp=mid;
    for(int i=0;i<k-2;i++){
        int r=m-temp;
        if(r>temp){
            return 0;
        }
        m=temp;
        temp=r;
        if((r==0) && (i<k-3)){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        for(int i=n/2;i<n+1;i++){
            if(fib(i,n,k)){
                ans=i;
                break;
            }
        }
        int count=0;
        while(ans<=n){
            if(fib(ans,n,k)){
                count+=1;
                ans+=1;
            }
            else{
                break;
            }
        }
        cout<<count<<"\n";  
    }

return 0;
}