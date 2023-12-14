#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int count=1,i=1;
        while(i!=0){
            if((n%(i+1))==0){
                count+=1;
                //cout<<i+1<<"\n";
                i+=1;
            }else{
                //cout<<i+1<<"\n";
                i=0;
            }
        }
        cout<<count<<"\n";
    }

return 0;
}