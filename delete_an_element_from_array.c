#include<stdio.h>
int main(){
    int a[100],position,i,n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the %d element in array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the location you waant to delete element:\n");
    scanf("%d",&position);
    if(position>=n+1){
        printf("element delete is not possible:\n");
    }
    else{
        for(i=position-1;i<n-1;i++)
        a[i]=a[i+1];
        printf("result array\n");
        for(i=0;i<n-1;i++){
            printf("%d\n",a[i]);

        }
    
    }
    return 0;

}