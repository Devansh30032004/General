#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int flag;
    struct node* next;
};

void printlist(struct node* head){
    struct node* p=head;
    while((p->next)!=head){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d ",p->data);
}

struct node* InsertAtBegin(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    ptr->next=head;
    while((p->next)!=head){
        p=p->next;
    }
    p->next=ptr;
    return ptr;
}

struct node* InsertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    while((p->next)!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}

struct node* InsertAtIndex(struct node* head,int data,int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    int i=0;
    while(i<=(index-1)){
        p=p->next;
        i+=1;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* InsertAfterNode(struct node* prev,int data,struct node* head){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    struct node* q=head->next;
    ptr->data=data;
    while(q!=(prev->next)){
        p=p->next;
        q=q->next;
    }
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}

int Checkcircle(struct node* head){
    struct node* p=head;
    struct node* q=head->next;
    while(p->next!=NULL){
        q=p->next;
        while(q->next!=NULL){
            if(q->next==p){
                return 1;
            }
            q=q->next;
        }
        p=p->next;
    }
    return 0;
}

int Checkcircle1(struct node* head){
    while(head!=NULL){
        if(head->flag==1){               //if (flag=1) ==> node has been visited so there is a loop int the linked list 
            return 1;
        }
        head->flag=1;                   //Marking flags as 1 so as to denote them as visited
        head=head->next;
    }
    return 0;
}

int main(){
    struct node* head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=67;
    head->flag=0;
    head->next=second;
    second->data=78;
    second->flag=0;
    second->next=third;
    third->data=23;
    third->flag=0;
    third->next=fourth;
    fourth->data=69;
    fourth->flag=0;
    fourth->next=head;
    printf("\nList before insertion: \n");
    printlist(head);
    //printf("\nList after insertion: \n");;
    //printlist(InsertAtBegin(head,89));
    //printlist(InsertAtEnd(head,97));
    //printlist(InsertAtIndex(head,97,2));
    //printlist(InsertAfterNode(third,97,head));
    if(Checkcircle1(head)){
        printf("\nThe linked list has a circle.\n");
    }else{
        printf("\nThe linked list does not have a circle.\n");
    }
}