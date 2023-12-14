#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll a[400010]={0};
ll b[400010]={0};

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n],brr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            cin>>brr[i];
        }
        ll count=1,m=arr[0];
        a[arr[0]]++;
        for(ll i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                count+=1;
            }else{
                 if(count>a[arr[i-1]]){
                    a[arr[i-1]]=count;
                }
                count=1;
            }
            if(arr[i]>m){
                 m=arr[i]; 
            }
            
        }
        if(count>a[arr[n-1]]){
                    a[arr[n-1]]=count;
                }
        ll count1=1,m1=brr[0];
        b[brr[0]]++;
        for(ll i=1;i<n;i++){
            if(brr[i]==brr[i-1]){
                count1+=1;
            }else{
                 if(count1>b[brr[i-1]]){
                    b[brr[i-1]]=count1;
                }
                count1=1;
            }
            if(brr[i]>m1){
                  m1=brr[i];
            }
        }
        if(count1>b[brr[n-1]]){
                    b[brr[n-1]]=count1;
                }
        ll ma=0;
        /*for(int i=0;i<8;i++){
              cout<<a[i]<<" ";
        }cout<<"\n";
        for(int i=0;i<8;i++){
              cout<<b[i]<<" ";
        }
        cout<<"\n";*/
        for(ll i=0;i<=max(m,m1);i++){
            if((a[i]+b[i])>ma){
                ma=a[i]+b[i];
            }
        }
        cout<<ma<<"\n";
        for(ll i=0;i<=max(m,m1);i++){
              a[i]=0;
              b[i]=0;
        }
    }

return 0;
}