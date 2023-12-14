#include<stdio.h>
#include<stdlib.h>

//Defining a structure for the linked list
//Adding flag to note down visited nodes so as to check for loops in the linked list
struct node{
    int data;
    int flag;
    struct node* next;
};

//Function to traverse through the Linked list and print the respective elements.
void printlist(struct node* head){
    struct node* ptr;
    ptr=head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

//To push elements into the linked list at the starting
struct node* push(struct node* head, int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->flag=0;
    ptr->next=head;
    return ptr;
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

//Function to check whether the Linked list has a circle or not i.e to check that is uniformly linear and not circular anywhere.
int Checkcircle(struct node* head){
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
    struct node *head,*second,*third,*fourth;  //Declaring pointer variables representing nodes of the linked list. 
    head=(struct node*)malloc(sizeof(struct node));  // Allocating the pointer variables dyanamic memory in Heap.
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->flag=0;
    head->next=second;// Linking first node to second
    second->data=78;
    head->flag=0;
    second->next=third;//Linking second node to third
    third->data=23;
    head->flag=0;
    third->next=fourth;//Linking third node to fourth
    fourth->data=90;
    head->flag=0;
    fourth->next=NULL;//Linking fourth node to NULL i.e marking the end of the Linked list.
    head=push(head,89);
    head=push(head,57);
    printf("\nList:\n");
    printlist(head);  //Original Linked List
    printf("\nList after reversing it:\n");
    printlist(reverselist(head)); //Reversed Linked List
    if(Checkcircle(head)){
        printf("\nThe linked list has a circle.\n");
    }else{
        printf("\nThe linked list does not have a circle.\n");
    }
    return 0;
}