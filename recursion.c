#include<stdio.h>
void odd();
void even();
int n=1;
void odd(){
    if(n<=10){
        printf("%d",n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if(n<=10){
        printf("%d",n-1);
        n++;
        odd();
    }
    return;
}
int main(){
    odd();
}
// #include<stdio.h>
// int fun(int n){
//     if(n==1){
//         return 0;
//     }
//     else{
//         return 1+fun(n/2);
//     }
// }
// int main(){
//     printf("%d",fun(8));
//     return 0;
// }