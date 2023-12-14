#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n==1){
         cout<<1<<"\n";
      }else if((n%2!=0) && (n>1)){
         cout<<-1<<"\n";
      }
      else{
         int arr[n];
         for(int i=0;i<n;i++){
            arr[i]=i+1;
         }
         for(int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
         }
         for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
         }
         cout<<"\n";
      }
   }

return 0;
}