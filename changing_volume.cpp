#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int count=0,c=0,e=0;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a>b){
            while(a!=b){
                int d=a-b;
                if(d<5 && d>2){
                    count+=2;
                    e+=d;
                }
                else if(d<=2){
                    count+=1;
                    e+=d;
                }
                c=d/5;
                a-=(5*c);
                count+=c;
                }
            }
        else{
            while(a!=b){
                int d=b-a;
                if(d<5 && d>2){
                    count+=2;
                    e+=d;
                }
                else if(d<=2){
                    count+=1;
                    e+=d;
                }
                c=d/5;
                a+=(5*c);
                count+=c;
                }
            }
        cout<<count<<endl;
        }
    
    }  
