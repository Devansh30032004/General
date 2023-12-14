#include <bits/stdc++.h>
using namespace std;

int main()
{
    double hh,mm;
    cin>>hh>>mm;
    double curr_h,inc,cost,dec;
    cin>>curr_h>>inc>>cost>>dec;
    float tim;
    if(hh<20){
        tim=((20-(hh+1))*60+(60-mm))*inc;
    }else{
        tim=0;
    }
    double p1=(ceil(curr_h/dec))*cost;
    float cost2=0.80*cost;
    double p2=(ceil((curr_h+tim)/dec))*cost;
    if(p1<=p2){
        cout<<p1;
    }else{
        cout<<p2;
    }
return 0;
}