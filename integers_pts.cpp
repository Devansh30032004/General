#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long int p[n];
        for(int j=0;j<n;j++){
            cin>>p[j];
        }
        int m;
        cin>>m;
        long long int q[m];
        for(int k=0;k<m;k++){
            cin>>q[k];
        }
        long long int o1=0,o2=0,e1=0,e2=0;
        for(int ch=0;ch<n;ch++){
            if(p[ch]%2==0){
                e1+=1;
            }
            else{
                o1+=1;
            }
        }for(int ch1=0;ch1<m;ch1++){
            if(q[ch1]%2==0){
                e2+=1;
            }
            else{
                o2+=1;
            }
        }
        cout<<((e1*e2)+(o1*o2))<<"\n";
    }
}