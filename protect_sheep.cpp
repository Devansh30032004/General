#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    char pas[r+2][c+2];
    for(int i=1;i<r+1;i++){
        for(int j=1;j<c+1;j++){
            cin>>pas[i][j];
        }
    }
    for(int j=0;j<c+2;j++){
        pas[0][j]='.';
        pas[r+1][j]='.';
    }
    for(int i=1;i<r+1;i++){
        pas[i][0]='.';
        pas[i][c+1]='.';
    }
    int ch=0;
    for(int i=1;i<r+1;i++){
        for(int j=1;j<c+1;j++){
            if(pas[i][j]=='S'){
                if((pas[i+1][j]=='W' || pas[i][j+1]=='W') || (pas[i][j-1]=='W' || pas[i-1][j]=='W')){
                    ch=1;
                    cout<<"No";
                    break;
                }
            }
            if(pas[i][j]=='.'){
                pas[i][j]='D';
            }
        }if(ch==1){
            break;
        }
    }if(ch==0){
        cout<<"Yes"<<"\n";
        for(int i=1;i<r+1;i++){
        for(int j=1;j<c+1;j++){
            cout<<pas[i][j];
        }cout<<"\n";
    }
}
}
