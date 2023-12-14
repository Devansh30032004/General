#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if((i+1)%4==1){
            cout<<'b';
        }else if((i+1)%4==2){
            cout<<'b';
        }else if((i+1)%4==3){
            cout<<'a';
        }else{
              cout<<'a';
        }
    }

return 0;
}