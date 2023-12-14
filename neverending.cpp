#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    if(n%2==0){
        cout<<"home";
    }else{
        cout<<"contest";
    }
}