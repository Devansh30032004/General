#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    int p=0,ne=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0)
           p+=1;
        else
           ne+=1;
    }
    if(p>=ne)
       return true;
    else
       return false;
}

int big(int arr[],int n){
    int p=0,ne=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0)
           p+=1;
        else if(arr[i]<0)
           ne+=1;
    }
    if(p>ne)
       return p;
    else
       return ne;
}

int index(int arr[],int n,int max){
    int ind;
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            ind=i;
        }
    }
    return ind;
}

int max_pos(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int max_neg(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if((abs(arr[i])>max) && (arr[i]<0)){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k=0,ch=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                ch+=1;
            }
        }
        if(ch==0)
           cout<<0<<"\n";
        
        else{
            int arr1[31],arr2[31];
            int max;
            if(big(arr,n)<13){
               // cout<<"yes\n";
            int max1=max_pos(arr,n);
            int max2=max_neg(arr,n);
            if(abs(max1)>abs(max2))
               max=max1;
            else
               max=max2;
            int ind=index(arr,n,max);
            for(int i=0;i<n;i++){
                if((max>0) && (arr[i]<0)){
                    arr[i]+=max;
                    arr1[k]=i+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
                else if((max<0) && (arr[i]>0)){
                    arr[i]+=max;
                    arr1[k]=i+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
            }
            if(max>0){
            for(int i=0;i<n-1;i++){
                  // if(arr[i]!=arr[i+1])
                   {
                   arr[i+1]+=arr[i];
                    arr1[k]=i+2;
                    arr2[k]=i+1;
                    k+=1;
                   }
                }
            }
            else{
            for(int i=0;i<n-1;i++){
                //if(arr[i]!=arr[i+1])
                {
                    arr[n-i-2]+=arr[n-i-1];
                    arr1[k]=n-i-1;
                    arr2[k]=n-i;
                    k+=1;
                }
                }
            }
            }
            else if(big(arr,n)>=13){
                if(check(arr,n))
                   max=max_pos(arr,n);
                else
                   max=max_neg(arr,n);
                int ind=index(arr,n,max);
                while(abs(max)<20){
                    max+=max;
                    arr1[k]=ind+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
                for(int i=0;i<n;i++){
                if((max>0) && (arr[i]<0)){
                    arr[i]+=max;
                    arr1[k]=i+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
                else if((max<0) && (arr[i]>0)){
                    arr[i]+=max;
                    arr1[k]=i+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
                }
                if(max>0){
            for(int i=0;i<n-1;i++){
                   arr[i+1]+=arr[i];
                    arr1[k]=i+2;
                    arr2[k]=i+1;
                    k+=1;
                   
                }
            }
            else{
            for(int i=0;i<n-1;i++){
                    arr[n-i-2]+=arr[n-i-1];
                    arr1[k]=n-i-1;
                    arr2[k]=n-i;
                    k+=1;
                }
            }
            }
            cout<<k<<"\n";
            for(int i=0;i<k;i++){
                cout<<arr1[i]<<" "<<arr2[i]<<"\n";
            }  
        }
    }

return 0;
}