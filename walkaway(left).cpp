#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
#define for(i,n,m) for(int i=0;i<n;i+=m)
#define rfor(i,n,m) for(int i=n;i>=0;i-=m)
#define vi vector<int>
#define vll vector<long long int>
#define vii vector<vector<int>>
#define vpi vector<pair<int,int>>



int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        ll brr[n+1]={0};
        ll arr[m];
        for(i,m,1){
            cin>>arr[i];
            brr[arr[i]]++;
        }
        /*for(i,n+1,1){
            cout<<brr[i]<<" ";
        }
        cout<<"\n";*/
        ll cookie=0,sell=0,nxt=1,ch=0;
        for(i,n,1){
            if((brr[i+1]==1) && (i+1!=nxt)){
                ch=1;
                if(ch==1)
                  cookie+=1;
                if(((i+1)<nxt) && (ch==1)){
                    sell+=1;
                }
                nxt=i+1+d;
            }
            if((i+1==nxt) && (brr[i+1]!=1)){
                ch=0;
                cookie+=1;
                nxt=i+1+d;
            }
            if((i+1==nxt) && (brr[i+1]==1)){
                
            }
        }
        cout<<cookie<<" "<<sell<<"\n";

    }

return 0;
}