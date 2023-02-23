// obeject : travers array 
// program

// #include<stdio.h>
// void main(){
//     int a[20],size;
//     printf("enter the size of array\n");
//     scanf("%d", &size);
//     printf("enter the %d element in array\n",size);
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("your array element are: ");
//     for(int i=0;i<size;i++){
//         printf("%d,",a[i]);

//     }

// }

// SORTING IN ARRAY 
// PROGRAM

#include<stdio.h>
void main(){
    int array[20],size,k;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the %d in array\n",size);
    for( int i=0;i<size;i++){
        scanf("%d",&array[i]);
        
        for( int j=0;j<i;j++){
            if(array[i]<array[j]){
                k=array[i];
                array[i]=array[j];
                array[j]=k;
            }

            
        }
    }
    printf(" your  array  element  in assending order :");

for (int i=0;i<size;i++){
    printf("%d  ",array[i]);
}    
}