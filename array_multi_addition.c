// #include<stdio.h>
// void main(){
// int a[3][3],b[3][3],c[3][3],j,i;
//  printf("enter the  elemnt in  first matrix\n");
//  for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         scanf("%d",&a[i][j]);

//     }
//  }
//    printf("enter the  elemnt in  second  matrix\n");
//  for(i=0;i<3;i++)
//  {
//     for(j=0;j<3;j++)
//     {
//         scanf("%d",&b[i][j]);
        
//     }
//  }
//     for(i=0;i<3;i++)
//  {
//     for(j=0;j<3;j++)
//     {
//       c[i][j]=a[i][j]+b[i][j];
//     }
//  }
//  printf("result matrix\n");
//  for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         printf("%d\t",c[i][j]);
//     } printf("\n");
//  }

// }
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the elements in first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("resulatnt matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}