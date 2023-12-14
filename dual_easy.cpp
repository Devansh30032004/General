#include <bits/stdc++.h>
using namespace std;
int index(int arr[],int n){
    int max=-30;
    int ind=0;
    for(int i=0;i<n;i++){
        if((arr[i]>max) && (arr[i]!=0)){
            max=arr[i];
            ind=i;        
        }
    }
    return ind;
}

int max(int arr[],int n){
    int max=-30;
    int ind=0;
    for(int i=0;i<n;i++){
        if((arr[i]>max) && (arr[i]!=0)){
            max=arr[i];
            ind=i;        
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
            int maxi=max(arr,n);
            int ind=index(arr,n);
            int arr1[50],arr2[50];
            if(maxi<0){
                k=n-1;
                cout<<k<<"\n";
                for(int i=n-1;i>0;i--){
                    cout<<i<<" "<<i+1<<"\n";
                }
            }
            else{
                while(maxi<20){
                    maxi+=maxi;
                    arr1[k]=ind+1;
                    arr2[k]=ind+1;
                    k+=1;
                }
                for(int i=0;i<n-1;i++){
                    
                        arr[i+1]+=(2*maxi);
                        arr1[k]=i+2;
                        arr2[k]=ind+1;
                        arr1[k+1]=i+2;
                        arr2[k+1]=ind+1;
                        k+=2;
                        maxi=max(arr,n);
                        ind=index(arr,n);
                    
                }
                cout<<k<<"\n";
                for(int i=0;i<k;i++){
                    cout<<arr1[i]<<" "<<arr2[i]<<"\n";
                }
            }
        } 
    }

return 0;
}