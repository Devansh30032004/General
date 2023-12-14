#include <bits/stdc++.h>
using namespace std;

vector<int> v(100004,1);

void solve(){
    v[0]=v[1]=0;
    for(int i=2;i<100004;i++){
        if(v[i]==1){
            for(int j=2*i;j<100004;j+=i){
                v[j]=2;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    solve();
    if(n<=2){
        cout<<1<<"\n";
    }else{
        cout<<2<<"\n";
    }
    for(int i=2;i<n+2;i++){
        cout<<v[i]<<" ";
    }

return 0;

}