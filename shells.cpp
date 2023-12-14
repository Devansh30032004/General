#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int li;
    cin>>li;
    int p=n%6;
    if(p==0){
        cout<<li;
    }else if(p==1){
        if(li==0){
            cout<<li+1;
        }else if(li==1){
            cout<<li-1;
        }else{
            cout<<li;
        }
    }else if(p==2){
        if(li==0){
            cout<<li+1;
        }else if(li==1){
            cout<<li+1;
        }else{
            cout<<li-2;
        }
    }else if(p==3){
        if(li==0){
            cout<<li+2;
        }else if(li==1){
            cout<<li;
        }else{
            cout<<li-2;
        }
    }else if(p==4){
        if(li==0){
            cout<<li+2;
        }else if(li==1){
            cout<<li-1;
        }else{
            cout<<li-1;
        }
    }else if(p==5){
        if(li==0){
            cout<<li;
        }else if(li==1){
            cout<<li+1;
        }else{
            cout<<li-1;
        }
    }

return 0;
}