#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int p,ch=0,ch1=0;
        int c[n+2];
        c[0]=0;
        c[1]=b[0]-a[0];
        for(int i=1;i<n;i++){
            p=b[i]-a[i];
            c[i+1]=p;
        }
        c[n+1]=0;
        for(int i=0;i<n+1;i++){
            if(c[i]<0){
                cout<<"NO\n";
                ch1=1;
                break;
            }
            if(c[i]!=c[i+1]){
                ch+=1;
            }
        }
        if(ch1==1){
            continue;
        }
        if(ch>2){
            cout<<"NO\n";
        }
        else{
              cout<<"YES\n";
        }
    }
}