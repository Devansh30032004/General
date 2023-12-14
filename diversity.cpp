#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(s.length()<k){
        cout<<"impossible";
    }
    else{
        int arr[s.length()];
        for(int i=0;i<s.length();i++){
            arr[i]=int(s[i]);
        }
        sort(arr,arr+s.length());
        int count=1;
        for(int i=1;i<s.length();i++){
            if(arr[i-1]!=arr[i]){
                count+=1;
            }
        }
        if(count>=k){
            cout<<0;
        }
        else{
            cout<<k-count;
        }
    }

return 0;
}