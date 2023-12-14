#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int  checkBST(struct node* root){
    static struct node* prev=NULL;
    if(root!=NULL){
        if(!checkBST(root->left)){
            return 0;
        }
        if((prev!=NULL) && (root->data<= prev->data)){
            return 0;
        }
        prev=root;
        return checkBST(root->right);
    }else{
        return 1;
    }
}

struct node* search(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

struct node* iterSearch(struct node* root,int key){
    while(root!=NULL){
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        root=root->left;
    }
    else{
        root=root->right;
    }
    }
    return NULL;
}

void insert(struct node* root,int key){
    struct node* prev=NULL;
    struct node* n=createNode(key);
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("Element already present in tree!!!");
            return;
        }else if(root->data>key){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    if(key<prev->data){
        prev->left=n;
    }else{
        prev->right=n;
    }
}

int main(){
    struct node* p=createNode(10);
    //p=(struct node*)malloc(sizeof(struct node));
    //p->data=2;
    //p->left=NULL;
    //p->right=NULL;

    struct node* p1=createNode(8);
    //p1=(struct node*)malloc(sizeof(struct node));
    //p1->data=4;
    //p1->right=NULL;
    //p1->left=NULL;
    
    struct node* p2=createNode(12);
    //p2=(struct node*)malloc(sizeof(struct node));
    //p2->data=9;
    //p2->left=NULL;
    //p2->right=NULL;

    //linking nodes
    struct node* p3=createNode(5);
    struct node* p4=createNode(15);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p2->right=p4;

    //preorder(p);
    //printf("\n");
    //postorder(p);
    //printf("\n");
    //inorder(p);
    //if(checkBST(p)){
    //    printf("\nIt is BST...\n");
    //}
    struct node* s=search(p,16);
    if(s==NULL){
        printf("Element not Found!!");
    }else{
       printf("%d ",s->data);
    }
    return 0;
}