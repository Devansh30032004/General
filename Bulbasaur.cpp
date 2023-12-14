#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[s.length()];
    for(int i=0;i<s.length();i++){
        if(int(s[i])>92){
            arr[i]=int(s[i]);
        }else{
            arr[i]=int(s[i]);
        }
    }
    int arr1[7]={0,0,0,0,0,0,0};
    for(int i=0;i<s.length();i++){
        if(arr[i]==66){
            arr1[0]++; 
        }else if(arr[i]==117){
            arr1[1]++;
        }else if(arr[i]==108){
            arr1[2]++;
        }else if(arr[i]==98){
            arr1[3]++;
        }else if(arr[i]==97){
            arr1[4]++;
        }else if(arr[i]==115){
            arr1[5]++;
        }else if(arr[i]==114){
            arr1[6]++;
        }else{
            continue;
        }
    }
    arr1[1]=arr1[1]/2;
    arr1[4]=arr1[4]/2;
    int min=100000;
    int ch=0;
    for(int i=0;i<7;i++){
        if(arr1[i]==0)
            ch=1;
    }
    if(ch==0){
        for(int i=0;i<7;i++){
            if((arr1[i]!=0) && (arr1[i]<min)){
                min=arr1[i];
            }
        }
        cout<<min;
    }else{
        cout<<0;
    }
return 0;
}