#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct node* push(struct node* top,int val){
    if(!isFull()){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=top;
        printf("%d added successfully to the Stack...",val);
        return ptr;
    }else{
        printf("Stack Overflow!! Can't add %d to the Stack..",val);
        return top;
    }
}

struct node*  pop(struct node* top){
    if(isEmpty(top)){
        printf("Stack Underflow!! Can't pop out any element...");
        return top;
    }else{
        struct node* b=top;
        top=top->next;
        int x=b->data;
        printf("Popped Element: %d",x);
        free(b);
        return top;
    }
}

int main(){
    struct node* top;
    top=(struct node*)malloc(sizeof(struct node));
    top->data=78;
    top->next=NULL;
    top=push(top,67);
    top=pop(top);
}