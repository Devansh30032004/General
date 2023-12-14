#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

vector<ll> v1;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Stable\n";
        cout<<0;
    }
    else if(((b-a)%9==0) && (((b-a)/9)>0)){
        cout<<"Stable\n";
        cout<<1<<"\n";
        cout<<"+ "<<(b-a)/9;
    }else{
        ll ch=0;
        ll f=b%9,m=a,x=0;
        while(m>0){
            x+=1;
            m=m/10;
        }
        ll dif=pow(10,x)-a;
        ll add=dif%9!=0?dif/9+1:dif/9;
        a+=(add*9);
        //cout<<a<<" ";
        if(add!=0)
           v1.pb(add);
        ll u=a,v=0;
        vector<ll> l;
        while(u>0){
            v=u%10;
            l.pb(v);
            u=u/10;
        }
        if(v==1){
            v1.pb(-1);
            a=0;
            for(ll i=0;i<l.size()-1;i++){
                a+=l[i]*pow(10,i);
            }
        }
        while(a!=f){
            a+=9;
            //cout<<a<<" ";
            ch+=1;
            ll g=a,r=0;
            vector<ll> v;
            while(g>0){
                r=g%10;
                v.pb(r);
                g=g/10;
            }
            if(r==1){
                v1.pb(ch);
                v1.pb(-1);
                ch=0;
                a=0;
                for(ll i=0;i<v.size()-1;i++){
                    a+=v[i]*pow(10,i);
                }
            }
        }
        //cout<<endl;
        if(ch!=0){
            v1.pb(ch);
        }
        ll count=v1.size();
        if(((b-f)/9)!=0){
            count+=1;
        }
        if(count>1000){
            cout<<"Broken";
        }else{
            cout<<"Stable\n";
            cout<<count<<"\n";
            ll c=0;
            /*for(ll i=0;i<v1.size();i++){
                cout<<v1[i]<<" ";
            }*/
            for(ll i=0;i<v1.size();i++){
                if(v1[i]==-1){
                    cout<<"- "<<1<<"\n";
                }else{
                    cout<<"+ "<<v1[i]<<"\n";
                }
            }
            if(((b-f)/9)!=0)
                 cout<<"+ "<<(b-f)/9;
        }
        

    }

return 0;
}