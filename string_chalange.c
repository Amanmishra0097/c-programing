#include<stdio.h>
void main(){
    char arr[]="Aman";
    for(int i=1;i<=4;i++){
        for(int j=0;j<i;j++){
            printf("%c",arr[j]);
        }printf("\n");
    }
}