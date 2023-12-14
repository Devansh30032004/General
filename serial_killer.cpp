#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string,string> p;
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<"\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        pair<string,string> q;
        cin>>q.first>>q.second;
        if(q.first==p.first){
            cout<<q.second<<" "<<p.second<<"\n";
            p.first=q.second;
        }
        else{
            cout<<q.second<<" "<<p.first<<"\n";
            p.second=q.second;
        }
    }

}