#include<stdio.h>

void succ_mult(int,int);
void succ_squ(int,int);

void succ_mult(int x,int n){
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=x;
    }
    printf("Output computed by successive multiplication: %d\n",pro);
}
void succ_squ(int x, int n){
    int p=x;

    if(n==0){
    x=1;  
    }
    int count=2;
    while(count<=n){
        x*=x;
        count*=2;
    }
    if(count>n){
    count/=2;}
    int temp=n-count;
    count=1;
    while(count<=temp){
        x=x*p;
        p*=p;
        count*=2; 
    }
    printf("Output computed by successive squaring: %d\n",x);
}
int main(){
    int X,n;
    printf("Write X : ");
    scanf("%d",&X);
    printf("Write n : ");
    scanf("%d",&n);
    succ_mult(X,n);
    succ_squ(X,n);
    return 0;
}
		

		