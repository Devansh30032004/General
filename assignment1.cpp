#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,m;
      cin>>n>>m;
      char arr[n][m];
      for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  char s;
                  cin>>s;
                  arr[i][j]=s;
            }
      }
      int ch=0;
      for (int y=0;y<n;y++){
            int ch1=0;
            for(int z=0;z<m;z++){
                  if(arr[y][z]=='B'){
                     ++ch; 
                  }
                  if(ch>0 && arr[y][z]=='W'){
                     ch1--;
                  }
                  ch1++;
            }if (ch!=0){
                  int w=((ch+1)/2);
                  cout<<y+w<<" "<<ch1+w-ch;
                  break;
            }
            }
      return 0;
}
      
