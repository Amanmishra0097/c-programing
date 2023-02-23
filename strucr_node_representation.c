#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node*left;
    struct node*right;

};

struct node* creatnode(int data){
    struct node*n; //creat a node pointer 
    n=(struct node*) malloc(sizeof(struct node)); // allocting memory in the heap
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}
//  int main (){
//     //consturcting the root node 
//     struct node *p;
//     p=(struct node*p)malloc(sizeof(struct node));
//     p->data;
//     p->left=NULL;
//     p->right=NULL;

//     //construct the second node 
//     struct node *p;
//     p1=(struct node*p)malloc(sizeof(struct node));
//     p1->data;
//     p1->left=NULL;
//     p1->right=NULL;

//     //constuct the third node 
//     struct node*p;
//     p2=(struct node*p) malloc(sizeof(struct node));
//     p2->data;
//     p2->left=NULL;
//     p2->right=NULL;


                              

   
 

