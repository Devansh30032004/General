#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s[n];
    for(int l=0;l<n;l++){
        cin>>s[l];
    }
    int ch=0;
    int count=0;
    vector<int> v;
    v.push_back(0);
    int sushi=0,max=0;
    for(int i=0;i<n;i++){
        if(s[i]==1){
            count+=1;
            if(s[i-1]==2){
                ch=1;
            }
        }
        if(s[i]==2){
            count+=1;
            if(s[i-1]==1){
                ch=1;
            }
        }
        if(ch==1){
           v.push_back(count-1);
           count=1;
           ch=0;
        }
    }
    v.push_back(count);
    for(int j=0;j<v.size()-1;j++){
        if(v[j]<=v[j+1]){
                sushi=v[j];
            }
        else{
                sushi=v[j+1];
            }
        if(sushi>max){
            max=sushi;
        }
        }
    cout<<(max*2);
}