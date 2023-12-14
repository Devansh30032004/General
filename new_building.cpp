#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++){
        int ta,fa,tb,fb,time=0;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
            time=abs(fa-fb);
        if(ta!=tb){
            time=abs(ta-tb);
            if(fa<a){
                if(fb<a){
                    time+=(a-fa)+(a-fb);
                }
                else if(fb>b){
                    time+=(a-fa)+(fb-a);
                }
                else{
                    time+=(a-fa)+(fb-a);
                }
            }
            else if(fa>b){
                if(fb<a){
                    time+=(fa-b)+(b-fb);
                }
                else if(fb>b){
                    time+=(fa-b)+(fb-b);
                }
                else{
                    time+=(fa-b)+(b-fb);
                }
            }
            else{
                if(fb<a){
                    time+=abs(fa-fb);
                }
                else if(fb>b){
                    time+=abs(fb-fa);
                }
                else{
                    time+=abs(fa-fb);
                }
            }
        }
        cout<<time<<"\n";
    }

return 0;
}