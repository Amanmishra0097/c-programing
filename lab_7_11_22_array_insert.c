#include<stdio.h>
int main(){
   int a[50],i,size,position,value;
    printf("Enter the size of array:\n");
    scanf("%d",& size);
    printf("Enter the element in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
 
    printf("Enter the position:\n");
    scanf("%d",& position);
    printf("Enter the value you want insert:\n");
    scanf("%d",&value);
    for(i=0; i<=position;i++)
    {
    //  a[i]=a[i+1];
        
    }
     a[position]=value;
    printf("your result array:\n");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    
}
}