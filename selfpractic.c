#include<stdio.h>
void main(){
    int a[50],size,i,j,temp;
    printf("inter the size of array\n");
    scanf("%d",&size);
    printf("enter the element in array\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
     printf("your assending order number \n");
     for(i=0;i<size;i++){
        printf("%d\n",a[i]);
     }
}