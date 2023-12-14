#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
      while (n--){
            int m;
            string s;
            cin>>m>>s;
            int count=0;
            int arr[500];
            for(int i=0;i<m;i++){
                  if (s[i]=='A' && s[i+1]=='P'){
                        count+=1;
                        s[i+1]='A';
                  }else{
                        arr.push_back(count);
                        
                  }
            }
            return 0;

    }
    /*n1,m1=input().split()
n=int(n1)
m=int(m1)
l1=list(map(int,input().split()))
l2=list(map(int,input().split()))
count=0
for x in l2:
      for y in l1:
            if (x+y)%2==1:
                  count+=1
                  l1.remove(y)
                  break
print(count)*/
