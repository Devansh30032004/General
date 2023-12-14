#include<bits/stdc++.h>
using namespace std;

int mode(string,int);

int main(){
    int n,m;
    cin>>n>>m;
    char v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int max_marks=0;
    for(int i=0;i<m;i++){
        int a=0,b=0,c=0,d=0,e=0;
        for(int j=0;j<n;j++){
            if(v[j][i]=='A')
                 a++;
            if(v[j][i]=='B')
                 b++;
            if(v[j][i]=='C')
                 c++;
            if(v[j][i]=='D')
                 d++;
            if(v[j][i]=='E')
                 e++;
        }
        int r=max(max(a,max(b,c)),max(d,e));
        max_marks+=r*arr[i];
    }
    cout<<max_marks;   
}
