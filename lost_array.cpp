#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int min=0,max=0;
    for(int i=0;i<l;i++){
        min+=pow(2,i);
    }
    for(int i=0;i<r;i++){
        max+=pow(2,i);
    }
    for(int i=0;i<(n-l);i++){
        min+=1;
    }
    for(int i=0;i<(n-r);i++){
        max+=pow(2,r-1);
    }
    cout<<min<<" "<<max;
return 0;
}