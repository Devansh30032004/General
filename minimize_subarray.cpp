#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int a=0,b=0,ch=0,temp=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
                 a=i+1;
            if(arr[i]==2)
                 b=i+1;
            if(arr[i]==n)
                 ch=i+1;        
        }
        if((ch<a) && (ch<b)){
            if(a<b){
                temp=a;
                a=ch;
                b=temp;
            }else{
                temp=b;
                b=ch;
                a=temp;
            }
        }else if((ch>a) && (ch>b)){
            if(a>b){
                temp=a;
                a=ch;
                b=temp;  
            }else{
                temp=b;
                b=ch;
                a=temp;
            }
        }else{
            temp=a;
            a=b;
            b=temp;
        }
        cout<<a<<" "<<b<<"\n";
    }

return 0;
}