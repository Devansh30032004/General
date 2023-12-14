#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printlist(struct node* head){
    struct node* ptr;
    ptr=head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node* InsertAtBegin(struct node* head, int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node* InsertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node* InsertAtIndex(struct node* head,int data,int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i<=(index-1)){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node* InsertAfterNode(struct node* prev,int data,struct node* head){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}

struct node* DeleteFirstElement(struct node* head){
    struct node* p=head;
    head=head->next;
    free(p);
    return head;
}

struct node* DeleteAtIndex(struct node* head,int index){
    struct node* p=head;
    int i=0;
    while(i<(index-1)){
        p=p->next;
        i+=1;
    }
    struct node* q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

struct node* DeleteAtEnd(struct node* head){
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node* DeleteValue(struct node* head,int value){
    struct node* p=head;
    struct node* q=head->next;
    while((q->data!=value) && (q->next!=NULL)){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}

//Function to reverse the list...it is basically reversing the links between the nodes by reversing the addresses stored in next.
struct node* reverselist(struct node* head){
    struct node* curr=head;
    struct node* next=NULL;
    struct node* prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}


int main(){
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=second;
    second->data=78;
    second->next=third;
    third->data=23;
    third->next=fourth;
    fourth->data=90;
    fourth->next=NULL;
    printf("\nList before insertion:\n");
    printlist(head);
    printf("\nList after insertion:\n");
    //printlist(reverselist(head));
    //printlist(InsertAtBegin(head,56));
    //printlist(InsertAtEnd(head,56));
    //printlist(InsertAtIndex(head,56,2));
    //printlist(InsertAfterNode(head,56,head));
    //printlist(DeleteFirstElement(head));
    printlist(DeleteAtIndex(head,2));
    //printlist(DeleteAtEnd(head));
    //printlist(DeleteValue(head,78));
}