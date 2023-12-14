#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int house[n];
    for(int i=0;i<n;i++){
        cin>>house[i];
    }
    int dis[n];
    for(int i=0;i<n;i++){
        if(house[i]!=0 && house[i]<=k){
            int d=10*abs(i+1-m);
            dis[i]=d;
        }else{
              dis[i]=0;
        }
    }int min=2000;
    for(int i=0;i<n;i++){
          if(dis[i]<min && dis[i]!=0){
                min=dis[i];
          }
    }
    cout<<min;  
}
