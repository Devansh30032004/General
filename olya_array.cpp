#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v[n];
        for(int i=0;i<n;i++){
            long long int m;
            cin>>m;
            for(long long int j=0;j<m;j++){
                long long int d;
                cin>>d;
                v[i].push_back(d);
            }
        }
        vector<long long int> mi;
        vector<long long int> mi1;
        for(long long int i=0;i<n;i++){
            long long int min=1000000000,min1=1000000000,ind=0;
            for(long long int j=0;j<v[i].size();j++){
                if(v[i][j]<min){
                    min=v[i][j];
                    ind=j;
                }
            }
            mi.push_back(min);
            v[i][ind]=-1;
            for(long long int j=0;j<v[i].size();j++){
                if((v[i][j]<min1) && (v[i][j]>0)){
                    min1=v[i][j];
                }
            }
            mi1.push_back(min1);
        }
        sort(mi.begin(),mi.end());
        long long int min2=1000000000,sum=0;
        for(long long int i=0;i<mi1.size();i++){
            if(mi1[i]<min2){
                min2=mi1[i];
            }
        }
        for(long long int i=0;i<mi1.size();i++){
                sum+=mi1[i];
        }
        cout<<(sum+mi[0]-min2)<<"\n";
    }

return 0;
}