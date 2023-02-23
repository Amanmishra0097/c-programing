#include<stdio.h>
void main(){
    // int mynum=5;
    // float mydecimal=5.99;
    // char myletter='D';
    // printf("%d\n",mynum);
    // printf("%f\n",mydecimal);
    // printf("%c\n",myletter);
// int sum1=100+50; // 150(100+50)
// int sum2=sum1+250; // 400(150+250)
// int sum3=sum2+sum2;//800(400+400)
// printf(" sum1: %d\n",sum1);
// printf(" sum2: %d\n",sum2);
// printf(" sum3: %d\n",sum3);

//int x = 5;
//x+=3;
//x-=3;
//x*=3;
//x/=3;
//x%=3;
//printf("%d",x);

// int x=5;
//x &=3;
//  printf("%d",x);
// int myInt;
// float myFloat;
// double myDouble;
// char mychar;
// printf("%lu\n", sizeof(myInt));
// printf("%lu\n", sizeof(myFloat));
// printf("%lu\n", sizeof(myDouble));
// printf("%lu\n", sizeof(mychar));

//Examale .1
// if (20>18)
// {
//     printf("20 is greater than 18");
// }
//Example.2
// int time=20;
// if (time<18)
// {
//     printf("good day");
// }
// else
// {
//     printf("good evening");
// }

// int a,b;
// printf("enter the first number");
// scanf("%d",a);
// printf("enter the second number\n ");
// scanf("%d",b);
// if(a>b)
// {
//     printf("%d",a);
// }
// else
// {
//     printf("%d",b);
// }

// int a,b,c;
// printf("enter the digit");
// scanf("%d",&a);
// scanf("%d",&b);
// scanf("%d",&c);
// if(a>b && b>c)
// {
//     printf("true");
// }
// else if(a>b && b<c)
// {
//     printf("");
// }
// else
// {
//     printf("false");
// }

// int time=20;
// (time=20)? printf("good day.") : ("good morinig");

// int month;
// printf("enter the month number\n");
// scanf("%d", & month);
// switch(month)
// {
//     case 1:
//     printf("january");
//     break;
//     case 2:
//     printf("febuary");
//     break;
//     case 3:
//     printf("march");
//     break;
//     case 4:
//     printf("april");
//     break;
//     case 5:
//     printf("may");
//     break;
//     case 6:
//     printf("jun");
//     break;
//     case 7:
//     printf("july");
//     break;
//     case 8:
//     printf("august")
//     case 9:
//     printf("september");
//     break;
//      case 10:
//     printf("october");
//     break;
//      case 11:
//     printf("novmber");
//     break;
//      case 12:
//      printf("december");
    
// }


//whle loop

// int i=0;
// while(i<5){
//     printf("%d\n",i);
//     i++;
// }

// do while loop
// int i=0;
// do{
//     printf("%d\n",i);
//     i++;
// }
// while(i<5);
int a,i;
printf("user input");
scanf("%d",&a);
for(i=1;i<=10;i++){
    
    printf("%d\n",a*i);
}
}