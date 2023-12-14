#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void printlist(struct node* head){
    struct node* p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void printReverseList(struct node* head){
    struct node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->prev;
    }
}

int main(){
    struct node* head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=78;
    head->next=second;
    head->prev=NULL;
    second->data=86;
    second->next=third;
    second->prev=head;
    third->data=91;
    third->next=fourth;
    third->prev=second;
    fourth->data=23;
    fourth->next=NULL;
    fourth->prev=third;
    printf("\n");
    printlist(head);
    printf("\n");
    printReverseList(head);

}