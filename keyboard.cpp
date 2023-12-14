#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    char arr[1000];
    int j=0,len=s3.length();
    for(int i=0;i<len;i++){
        for(int k=0;k<26;k++){
            int p=s1[k];
            int q=s3[i];
            int r=p+32;
            if(q==p){
                arr[j]=s2[k];
                j+=1;
            }
            else if(q==r){
                int s=s2[k];
                arr[j]=char(s+32);
                j+=1;
            }
            else
                continue;
            }
        }
    for(char ch : arr){
        cout<<ch;
    }
}

