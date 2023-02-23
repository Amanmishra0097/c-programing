// #include<stdio.h>
// int main(){
//     int array[]={2,3,4,5,6,7,8,9};
//     int sum;
//     float avg;
//     for(int i=0;i<8;i++){
//         sum =sum+array[i];
//     }
//     avg=(float)sum/8;
//     printf("%f",avg);
//     return 0;
// }

// traverse
#include<stdio.h>
int main(){
    int array[50],size;
    printf("enter tha size of array\n");
    scanf("%d",&size);
    printf("eneter the %d elements in array\n",size);
    for(int i =0;i<=size;i++){
        scanf("%d",&array[i]);

    }
    printf("your array elements are :\n");
    for(int i=0;i<=size;i++){
        printf("%d\n",array[i]);
    
    }
    return 0;
}