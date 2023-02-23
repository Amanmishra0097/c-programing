// write a program to print integer value ,one float value and one charecter value .
// #include<stdio.h>
//  void main(){
//     int a =5;
//     float b=5.5;
//     char c= 'c';
//     printf(" This is the integer value : %d\n",a);
//     printf(" This is the float value : %f\n",b);
//     printf(" This is the charecter value:  %c\n",c);
  
// }


// write a program to print the month name according to month number given by the user 

// #include<stdio.h>
// void main(){
//     int month;
//     printf("Enter the month number\n");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1:
//     printf("january");
//     break;
//     case 2:
//     printf("Febuary");
//     break;
//     case 3:
//     printf("March");
//     break;
//     case 4:
//     printf("april");
//     break;
//     case 5:
//     printf("may");
//     break;
//     case 6:
//     printf("june");
//     break;
//     case 7:
//     printf("july");
//     break;
//     case 8:
//     printf("august");
//     break;
//     case 9:
//     printf("september");
//     break;
//     case 10:
//     printf("october");
//     break;
//     case 11:
//     printf("november");
//     break;
//     case 12:
//     printf("December");
//     break;
//      default:
//      printf(" number  out of the month ");
//         break;
//     }

//     }

// write a program to print the  odd numebers from the limit given by the user 

// #include<stdio.h>
// void main(){
// int i,n1,n2;
// printf("Enter min number and max number\n1");
// scanf("%d\n",&n1);
// scanf("%d",&n2);
// printf("Odd number given range by the user \n");
// for(i=n1;i<=n2;i++){
//     if(i%2==1){
//         printf("%d\n",i);
//     }
// }
// }

// write a program to print number given by the user is prime or not 

// #include<stdio.h>
// void main()
// {
//     int n,i,j,count=0;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//          count=count+1;
//     }
//         if(count==2)
//             printf("%d is prime number",n);
//         else 
//                printf("%d is not prime ",n);     
               
// }

 
//  write the program to greater value from the three numbers given by the user  
// #include <stdio.h>

// int main() {

//    int n1, n2, n3;

//   printf("Enter three different numbers:\n");
//   scanf("%d %d %d", &n1, &n2, &n3);

//   // if n1 is greater than both n2 and n3, n1 is the largest
//   if (n1 >= n2 && n1 >= n3)
//     printf("%is the  greater  value .", n1);

//   // if n2 is greater than both n1 and n3, n2 is the largest
//   if (n2 >= n1 && n2 >= n3)
//     printf("%d is the greaetr   value .", n2);

//   // if n3 is greater than both n1 and n2, n3 is the largest
//   if (n3 >= n1 && n3 >= n2)
//     printf("%d is the greater value .", n3);

//   return 0;
// }


// write a programto print the 10 naturel number using y the array

// using for loop
// #include <stdio.h>
// int main(){
//     int i;
//     printf("10 natural number are:\n");
//     for(i=1;i<=10; i++){
        
//         printf("%d\t",i);
//     }
//     return 0;
// }

// using while loop 
// #include <stdio.h>
// int main(){
//     int i;
//     printf("Ten natural numbers are :\n");
//     while(i<10){
//         i++;
//         printf("%d\t",i);
//     }
//     return 0;
// }

// using do while loop 
// #include<stdio.h>
// int main(){
//     int i=1;
//     printf("10 natural number are: \n");
//     do{
//         printf("%d\t",i); 
//         i++;
//     /}while(i<=10);
//     printf("\n");

    
//     return 0;
// }

// make the table 
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number whose table is to be made:\n");
//     scanf("%d",&n);
//     printf("the table of: %d\n",n);
//     for(i=1;i<=10;i++)
//     {
//         printf("%d\n",i*n);

//     }
//     return 0;
// }

// AVRAGE SUM
#include<stdio.h>
int main(){
    int num, sum=0;
    float avg;
    printf("enter the number:\n");
    
    for( int i=1;i<=10;i++){
         scanf("%d",&num);
         sum=sum+num;
    }   
    
     printf("10 number sum is:%d\n",sum);
    avg= (float)sum/10;
    printf("10 number avg is:%f",avg);
    return 0;

}



// #include <stdio.h>
// int main(){
//     char name[50];
//     int roll;
//     float marks;
    
//  printf("Enter The Information of Students :\n");
//      printf("Enter Name : ");
//      scanf("%s",&name);
//      printf("Enter Roll No. :");
//      scanf("%d",&roll);
//      printf("Enter marks : ");
//      scanf("%f",&marks);
    
//      printf("\n show the Information\n");
    
//  printf("Name: %s\n",name);
//     printf("Roll no.: %d\n",roll);
//     printf("Marks: %f\n",marks);
//     return 0;
//}


// #include<stdio.h>
// int  main(){
// int *i,*j;
// int a=8;
// i=&a;
// *i=*j;
// printf("%d%d",i,j);
// return 0;
// }
