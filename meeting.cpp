#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int count=0;
    if(a==b){
        cout<<0;
    }
    
if((a-b)%2==0){
    count=(abs(a-b))/2;
    int min=(count*(count+1))/2;
    cout<<(min*2);
}
else{
    count=(abs(a-b))/2;
   int min=((count +1)*(count+2))/2;
   int min1=(count*(count+1))/2;
   cout<<min+min1;
}

}