#include<stdio.h>

int strcomp(char* x,char* y,int lenx,int leny);
int len(char* x);
void swap(char** a,char** b);
void strsort(char a[][20],char **b,int n);

int strcomp(char* x,char* y,int lenx,int leny){
    int min=0;
    if(lenx<leny){
        min=lenx;
    }
    else{
        min=leny;
    }
    int i;
    for(i=0;i<min;i++){
        int p=x[i];
        int q=y[i];
        if(p>q){
            return -1;
        }
        else if(p<q){
            return 1;
        }
    }
    if((x[min-1]==y[min-1]) && (lenx>leny)){
        return -1;
    }
    else if((x[min-1]==y[min-1]) && (lenx<leny)){
        return 1;
    }else{
        return 0;
    }
}

int len(char* x){
    int count=0,i=0;
    while(x[i]!='\0'){
        count+=1;
        i+=1;
    }
    return count;
}

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void strsort(char a[][20],char **b,int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    int i, j;
    for (i = 1; i < n; i++) {
        for (j = i-1; j>=0; j--) {
            int k = 0;
            
            while (b[j][k] == b[j + 1][k]) {
                k++;
            }
            
            if (b[j][k] > b[j + 1][k]) {
                swap(&b[j], &b[j + 1]);
            }
        }
    }
    printf("Sorted strings are:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",b[i]);
    }
}

int main(){
    printf("______________________________PART_1___________________________________\n");
    printf("Enter the two strings to be compared: \n");
    char s[2][20];
    for(int i=0;i<2;i++){
        printf("String %d: ",i+1);
        scanf("%s",s[i]);
    }
    int p=strcomp(s[0],s[1],len(s[0]),len(s[1]));
    printf("%d\n",p);
    printf("_______________________________PART_2___________________________________\n");
    printf("Write n: ");
    int n;
    scanf("%d",&n);
    char a[n][20];
    for(int i=0;i<n;i++){
        printf("Write a[%d]: ",i);
        scanf("%s",a[i]);
    }
    char* b[n];
    strsort(a,b,n);
    return 0;
}