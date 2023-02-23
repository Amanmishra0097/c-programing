#include<stdio.h>

#define size 5

int deque[size];

int f = -1, r = -1;

void insert_front(int x)

{

if((f==0 && r==size-1) || (f==r+1))

{

printf("Overflow");

}

else if((f==-1) && (r==-1))

{

f=r=0;

deque[f]=x;

}

else if(f==0)

{

f=size-1;

deque[f]=x;

}

else

{

f=f-1;

deque[f]=x;

}
 
}
// void  main(){
//     int p,n,count;
//     float si,r;
//     count=1;

//     while(count<=3){
//         printf("\nenter the value p ,n, r\n");
//         scanf("%d%d%f",&p,&n,&r);
//         si=p*n*r/100;
//         printf("simple intrest =%f",si);
//         count=count+1;

//     } 
    

// // }    
// #include<stdio.h>
// void  main(){
//     int p=1000,t=5;
//     float si,r=13.5;
//         si=p*t*r/100;
//         printf("simple intrest =%f",si);
        

    
    
// # include <stdio.h>
// int main( )
// {
// int i = 5 ;
// while ( i >= 1 )
// {
// printf ( "Make the computer literate!\n" ) ;
// i=i-1 ;
// }
// }
//  # include <stdio.h>
// int main( )
// {
// int i = 0 ;
// while ( i++ <=10 ){
// printf ( "%d\n", i ) ;
// }
// return 0 ;
// }
// #include<stdio.h>
// void main(){
//     int x =6, y, z ;
// y = --x ;
// z = x-- ;
// printf ( "%d %d %d\n", x, y, z ) ;

// }

// #include<stdio.h>
// void main(){
//     int x=3,y=4,z;
//     z=x-- -y;
//     printf("%d %d %d",x,y,z);

// }

