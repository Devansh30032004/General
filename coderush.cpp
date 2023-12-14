#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int count=0;
		if(s.length()==1){
			if(s[0]=='^')
			    count+=1;
			else
			    count+=2;
		}else if(s.length()>1){
			if(s[0]=='_')
			     count+=1;
		}
		for(int j=0;j<s.length()-1;j++){
		   if(s[j]=='_' && s[j+1]=='_'){
		   	count+=1;
		   }
        }if(s[s.length()-1]=='_' && s.length()>1){
			count+=1;
		}
		cout<<count<<endl;
	}
	return 0;
}