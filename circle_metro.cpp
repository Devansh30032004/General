#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int ele1,ele2;
    if(x>a){
         ele1=x-a; 
    }
    else{
          ele1=n-(a-x);
    }
    if(y<b){
          ele2=b-y;
    }
    else{
          ele2=n-(y-b);
    }
    int arr[ele1+1],arr1[ele2+1],count=0,count1=0;
    arr[0]=a,arr1[0]=b;
    int i=1,j=1;
    while(true){
      if(a==x){
            break;
      }
      if(arr[i-1]!=n){
            arr[i]=a+1;
            a+=1;
        }
      else{
            arr[i]=1;
            a=1;
        }
      count+=1;
      i+=1;  
    }
    while(true){
      if(b==y){
            break;
      }
      if(arr1[j-1]!=1){
            arr1[j]=b-1;
            b-=1;
        }
      else{
            arr1[j]=n;
            b=n;
        }
      count1+=1;
      j+=1;
    }
    /*for(int ch: arr){
        cout<<ch<<" ";
    }cout<<"\n";
    for(int ch1 : arr1){
        cout<<ch1<<" ";
    }cout<<"\n";*/
    int m,ch=0;
    if(ele1<ele2){
          m=ele1+1;
    }else{
          m=ele2+1;
    }
    for(int i=0;i<m;i++){
          if(arr[i]==arr1[i]){
                cout<<"YES";
                ch=1;
                break;
          }
    }
    if(ch==0){
          cout<<"NO";
    }
    return 0;
}