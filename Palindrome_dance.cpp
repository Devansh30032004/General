#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min;
    if(a>b){
        min=b;
    }else{
        min=a;
    }
    int p,q,sum=0,ch=0;
    for(int i=0;i<n/2;i++){
        p=arr[i];
        q=arr[n-1-i];
        if(p==q && p!=2){
            continue;
        }else if(p==2){
            if(q==1){
                sum+=b;
            }else if(q==0){
                sum+=a;
            }else{
                sum+=(2*min);
            }
        }else if(q==2){
            if(p==1){
                sum+=b;
            }else if(p==0){
                sum+=a;
            }else{
                sum+=(2*min);
            }
        }else{
            cout<<-1;
            ch=1;
            break;
        }
    }
    int mid;
    if(n%2!=0){
        mid=(n/2)+1;
        if(arr[mid-1]!=2){
          if(ch==0){
                cout<<sum;
          }
        }else{
          if(ch==0){
                cout<<sum+min;
          }
        }
    }else{
          if(ch==0){
                cout<<sum;
          }
      }
}
