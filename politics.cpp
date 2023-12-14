#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<string> v(n);
        for(int j=0;j<n;j++){
           cin>>v[j];
        }
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        
    
        int arr[n];
        int count=0;
        for(int k=0;k<n;k++){
            if(v[0]==v[k]){
                count+=1;
            }
        }
    cout<<count<<"\n";
    }
}
