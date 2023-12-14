#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    arr[0]=0;
    arr[n+1]=1001;
    int count=0,ch=0;
    vector<int> v;
    for(int i=1;i<n+1;i++){
        if((arr[i]-arr[i-1]==1) && (arr[i+1]-arr[i]==1)){
            count+=1;
            ch=1;
        }
        else if(ch==1){
             v.push_back(count);
             count=0;
        }
    }
    v.push_back(count);
    int max=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>max)
           max=v[i];
    }
    cout<<max;

return 0;
}