#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int sum1=0,sum2=0,point,ch=0,temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i-1]){
            point=i;
        }
        sum1+=arr[i];
    }
    for(int i=n;i<2*n;i++){
        sum2+=arr[i];
    }
    if(sum1!=sum2){
        for(int i=0;i<2*n;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        for(int i=0;i<n;i++){
            for(int j=n;j<2*n;j++){
                point=sum1-arr[i]+arr[j];
                if(point!=sum2){
                    ch=1;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }if(ch==1)
                 break;
        }if(ch==0){
            cout<<-1;
        }else{
            for(int i=0;i<2*n;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}