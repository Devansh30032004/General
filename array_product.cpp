#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pop pop_back

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if((n==2) && (arr[0]*arr[1]>0)){
        cout<<1<<" "<<1<<" "<<2<<"\n";
    }else if((n==2) && (arr[0]*arr[1]<0)){
        if(arr[0]<0){
            cout<<2<<" "<<1<<"\n";
        }else{
            cout<<2<<" "<<2<<"\n";
        }
    }else if((n==2) && (arr[0]*arr[1]==0)){
        if(arr[0]>0){
            cout<<2<<" "<<2<<"\n";
        }else if(arr[1]>0){
            cout<<2<<" "<<1<<"\n";
        }else if(arr[0]==0){
            cout<<2<<" "<<2<<"\n";
        }else{
            cout<<2<<" "<<1<<"\n";
        }
    }else{
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++){
            v.pb({arr[i],i+1});
        }
        sort(v.begin(),v.end());
        ll p=0,ne=0,z=0;
        for(ll i=0;i<n;i++){
            if(v[i].first>0){
                p+=1;
            }else if(v[i].first<0){
                ne+=1;
            }else{
                z+=1;
            }
        }
        //cout<<p<<" "<<z<<" "<<ne<<"\n";
        ll j=0;
        if(ne%2==0){
        for(ll i=0;i<ne-1;i++){
            cout<<1<<" "<<v[i].second<<" "<<v[i+1].second<<"\n";
        }
        j=ne-1;
        }else if(ne%2!=0){
           for(ll i=0;i<ne-2;i++){
            cout<<1<<" "<<v[i].second<<" "<<v[i+1].second<<"\n";
        }
        j=ne-2; 
        }
        if(ne%2==0){
            for(ll i=ne;i<ne+z-1;i++){
                cout<<1<<" "<<v[i].second<<" "<<v[i+1].second<<"\n";
            }
            if(p!=0)
               cout<<2<<" "<<v[ne+z-1].second<<"\n";
        }else if(ne%2!=0){
            for(ll i=ne-1;i<ne+z-1;i++){
                cout<<1<<" "<<v[i].second<<" "<<v[i+1].second<<"\n";
            }
            if(p!=0)
               cout<<2<<" "<<v[ne+z-1].second<<"\n";
        }if((ne>=2) && (p!=0))
             cout<<1<<" "<<v[j].second<<" "<<v[ne+z].second<<"\n";
         if((ne>=2) && ((p==0) && (z==0))){
            cout<<2<<" "<<v[ne-1].second<<"\n";
         }
         if((ne>=2) && ((p==0) && (z==1))){
            cout<<2<<" "<<v[ne].second<<"\n";
         }
        for(ll i=ne+z;i<ne+z+p-1;i++){
            cout<<1<<" "<<v[i].second<<" "<<v[i+1].second<<"\n";
        }
    }  

return 0;
}