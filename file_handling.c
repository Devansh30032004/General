#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr=NULL;
    char string[50];
    /*ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("The contents of the file are:\n %s",string);*/
    ptr=fopen("myfile.txt","r");
    fgets(string ,19,ptr);
    printf("The contents of the file are:\n%s",string);
    return 0;
}