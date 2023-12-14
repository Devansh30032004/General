#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* s){
    if(s->top==-1){
        //printf("\nThe stack is empty!");
        return 1;
    }else{
        //printf("\nThe stack is not empty!");
        return 0; 
    }
}

int isFull(struct stack* s){
    if(s->top==s->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* s,int val){
    if(isFull(s)){
        printf("\nStack Overflow!!Can't add %d to the Stack",val);
    }else{
        s->top++;
        s->arr[s->top]=val;
    }
}

int pop(struct stack* s){
    if(isEmpty(s)){
        printf("\nStack Underflow!! Cannot pop from the stack");
        return -1;
    }else{
        int val=s->arr[s->top];
        s->top--;
        return val;
    }
}

int peek(struct stack* s,int i){
    if(s->top-i+1<0){
        printf("Invalid position!!");
        return -1;
    }else{
        return s->arr[s->top-i+1];
    }
}

int stackTop(struct stack* s){
    return s->arr[s->top];
}

int stackBottom(struct stack* s){
    return s->arr[0];
}

int main(){
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size *sizeof(int));
    push(s,89);
    push(s,67);
    push(s,76);
    push(s,75);
    push(s,1);
    push(s,6);
    //printf(" %d ",pop(s));
    //printf(" %d",peek(s,2));
    printf(" %d",stackTop(s));
    printf(" %d",stackBottom(s));
}
