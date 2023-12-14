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
        pair<double,double> p1,p2,p3;
        cin>>p1.first>>p1.second;
        cin>>p2.first>>p2.second;
        cin>>p3.first>>p3.second;
        double dis1=sqrt(pow(abs(p2.first-p1.first),2)+pow(abs(p2.second-p1.second),2)); //d(PA)
        double dis2=sqrt(pow(abs(p3.first-p1.first),2)+pow(abs(p3.second-p1.second),2)); //d(PB)
        double dis3=sqrt(pow(abs(p2.first-p3.first),2)+pow(abs(p2.second-p3.second),2)); //d(AB)
        double dis4=sqrt(pow(abs(p2.first-0),2)+pow(abs(p2.second-0),2)); //d(OA)
        double dis5=sqrt(pow(abs(0-p3.first),2)+pow(abs(0-p3.second),2)); //d(OB)
        double ans=1e9,ans1=1e9;
        ans=min(max(dis2,dis5),max(dis1,dis4));
        ans1=min(max(max(dis3/2,dis2),dis4),max(max(dis3/2,dis1),dis5));
        ans=min(ans,ans1);
        cout<<setprecision(10)<<fixed<<sqrt(ans)<<"\n";
    }
return 0;
}