#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);
    if(argc>=2){
        for(int i=0;i<argc;i++){
            printf("%s\n",argv[i]);
        }
    }
    return 0;
}
