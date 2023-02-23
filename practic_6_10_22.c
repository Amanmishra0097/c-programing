// #include<stdio.h>
// void main(){
//     char a[10]="Aman";
//     for(int i=1;i<5;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             printf("%c",a[j]);
//         }printf("\n");
    // }
//     int num;
//     printf("enter the number :");
//     scanf("%d",&num);
//     for(int i=0;i<=num;i++){
//         if(i%2==1){
//             printf("%d\n",i);
//         }
//     }
 

//  float sum=0;
//  float avg=0;
// for(int i=0;i<=10;i++){
//     // printf("%d ",i);
//    sum=sum+i;
// }  
//     avg=sum/10;
//     printf("%f %f ",sum,avg);

//  int array[20],size;
//     printf("Enter the size :");
//     scanf("%d",&size);
//     printf("Enter the %d values",size);
//     for(int i=0;i<size;i++){
//     printf("Enter the %dth value ",i);    
//     scanf("%d",&array[i]);
//    // printf("%d",array[i]);
//     }
//     printf("Odd numbers are :");
//     for(int i=0;i<size;i++)
//     {
//         if(array[i]%2==1)
//         {
//             printf(" %d ",array[i]);
//         }
//     }. 
  

//  }



Here is the whole source code:

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

int main(){
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */
   
Here is the whole source code:

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

int main(){
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

}
