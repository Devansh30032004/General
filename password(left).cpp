#include <bits/stdc++.h>
using namespace std;
//wrong soln

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m;
        cin>>m;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int count=0,ch=0;
        for(int i=0;i<m;i++){
            for(int j=i;j<=(int(s2[i])-int(s1[i]));j++){
                int p=int(s1[j]);
                size_t found = s.find(char(p));
                cout<<found;
                if (found != string::npos){
                    count+=1;
                    break;
                }else{
                    if(count==m){
                        ch=1;
                        cout<<"YES"<<"\n";
                    }
                    count=0;
                    p+=1;
                    continue;
                }
            }
        }if(ch==0){
            cout<<"NO"<<"\n";
        }
    }


return 0;
}