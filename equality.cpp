#include<bits/stdc++.h>
using namespace std;

int count(string s,char a){
    int c=0;
    for(int j=0;j<s.length();j++){
        if(s[j]==a){
            c+=1;
        }
    }
    return c;
}
 int main(){
    int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
    int arr[26];
    for(int i=65;i<91;i++){
        int c=count(s,char(i));
        arr[i-65]=c;
    }
    int min=arr[0];
    for(int i=1;i<k;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min*k;
}
