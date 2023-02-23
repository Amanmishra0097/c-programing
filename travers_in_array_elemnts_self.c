#include<stdio.h>
int main(){
    int array[50],size,i;
    printf("Enter the size of array\n");
    scanf("%d",& size);
    printf("Enter the %d elements in array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",& array[i]);
    }
    printf("your enter the aarray elementara\n");
    for(i=0;i<size;i++)
    {
           printf("%d\n", array[i]);
    }   

        
    
    return 0;
}