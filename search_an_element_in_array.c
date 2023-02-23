#include<stdio.h>
void main(){
    int array[20],size,i,num;
    printf("Enter  the size of array:\n");
    scanf("%d",&size);
     printf("Enter the %d elements in array:\n",size);
    for(i=0;i<size;i++){
         scanf("%d",&array[i]);
    }
    printf("please enter value you want to search:\n");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(array[i]==num)
        {
            printf("your number %d is at position %d",num,i);
            break;
        }
    }
    if(i==size){
        printf("number not found");
    }
}
