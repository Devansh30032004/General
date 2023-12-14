#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*p;
    printf("Enter size of array:\n ");
    scanf("%d",&n);
    p=(int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<=((n-2)/2);i++){
        int r=0,temp;
        for(int j=i;j<n;j++){
            if(p[j]>r){
                temp=p[j];
                p[j]=r;
                r=temp;
            }
        }
        p[i]=r;
    }
    printf("Output: ");
    for(int i=0;i<n;i++){
        if(i!=(n-1))
            printf("%d, ",p[i]);
        else
            printf("%d\n",p[i]);
    }
    printf("The maximum element from the array is: %d\n",p[0]);
}