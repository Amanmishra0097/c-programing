// #include<stdio.h>
// void main(){
//     int a[100],size,i,j,temp;
//     printf("enter the size of array\n");
//     scanf("%d",&size);
//     printf("enetr the  %d array elements\n",size);
//     for(i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("show the element\n");
//     for(i=0;i<size;i++){
//         for(j=i+1;j<size;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }

//         }
//     }      
//     printf("your sorted element\n");
//     for(i=0;i<size;i++){
//         printf("%d\n",a[i]);
    
//     }
   
    
    
// }
#include<stdio.h>
void main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter the frist  matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                  c[i][j]=a[i][j]*b[i][j];

            }
        }
    }
    printf("matrix addition result \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);

        }
     printf("\n");

    }
}