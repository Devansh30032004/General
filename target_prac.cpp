#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back
int main()
{
    ll t;
    cin>>t;
    while(t--){
        char arr[10][10];
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                char c;
                cin>>c;
                arr[i][j]=c;
            }
        }
        ll pt=0;
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                if(arr[i][j]=='X'){
                    if((i==0) || (i==9) || (j==0) || (j==9)){
                        pt+=1;
                    }
                    else if((i==1) || (i==8) || (j==1) || (j==8)){
                        pt+=2;
                    }
                    else if((i==2) || (i==7) || (j==2) || (j==7)){
                        pt+=3;
                    }
                    else if((i==3) || (i==6) || (j==3) || (j==6)){
                        pt+=4;
                    }
                    else{
                        pt+=5;
                    }
                }
            }
        }
        cout<<pt<<"\n";
    }
    

return 0;
}