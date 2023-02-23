// #include<stdio.h>
// void main(){
   
//    int a;
//    printf("enter the values \n");
//    scanf("%d",&a);
//    if (a<100){
//     printf("vlues less than 100\n");
//     if(a>50){
//         printf("values greater than 50");
//     }

//    } 
//   else{
//    printf("vlues greater than 100");
//   }
// }

 

// #include<stdio.h>
// void main(){
//     int age;
//     int weight;
//     printf("enter the age ");
//     printf("enter the weight");
//     scanf("%d%d",&age,&weight);
    
//     if(age<18){
//         printf("you are eligible to blood donate \n");
//     }
//       else if(age>18 & weight>50){
//             printf("you are eligible to blood donate\n");
//         }

    
//     else{
//         printf("you can not donate blood");
//     }
// }
    

// #include<stdio.h>
// void main(){
//     int age;
// int weight;
// printf("enter the age and weight\n");
// scanf("%d%d",&age,&weight);
// if(age>=18){
//     if(weight>=50){
//         printf("you are eligible to donate blood");
//     }
//     else
//     {
//       printf("you are un");
//     }
//     else
//     printf()
// }    

// }



// #include<stdio.h>
// void main(){
//     int age;
//     printf("enter your age\n");
//     scanf("%d",&age);
//     if (age<18){
//         printf("you are eligible for work\n");


//    }
// }

// swappping
// #include<stdio.h>
// void main(){
//     int x;
//     int y;
//     printf("enter  two  number \n");
//     scanf("%d%d",&x,&y);
//     printf("swapping\n") ;
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("%d\n%d",x,y);
// }

//nested if _else 
// #include<stdio.h>
// void main(){
//     int n;
//     printf("enter the nummber ");
//     scanf("%d",&n);
//     if(n>0){
//         if(n<10){
//             if(n%2==0){
//                 printf("that is even");
//             }
//         }
//     }
//     else
//     {
//        printf("that is not even");
//     }
// }


// usiing while loop

// #include<stdio.h>
// void main(){
//     int i;
//     while(i<10){
//         i++;
//         printf("%d  ",i);
//     }
// }

//  write the program to print "my section is the best "infinite times using while loop .
// #include<stdio.h>
// void main(){
    
//     while(1){
//         printf("my secction is the best");
//     }
// }

// write a program will find the summation of numbers from 1 to 10.
// #include<stdio.h>
// void main(){
//     int i;
//    int sum=0;
//     while(i<10){
//         i++;
//         sum=sum+i;
//         }
//        printf(" summation is :%d",sum); 

// }
    

// write  the proogram to print from 10 nto 1 reverse ot=rder using while loop 

// #include<stdio.h>
// void main(){
//     int i=10;
//     while(i>0){
//     i--;
//     printf("%d  ",5);
//     }
//  }

// write a code to sum the numbers by user input until the numberr is positive using while loop.
// #include<stdio.h>
// void main(){
//     int a;
//     int sum=0;
//     printf("Enter the number\n");
//     scanf("%d",&a);
//     while(a>0){
//         sum=sum+a;
//         printf("enter the number\n");
//         scanf("%d",&a);
//  }
 
//  printf("sum of hole integer number : %d",sum);

// }

// #include<stdio.h>
// int main(){
//     int a,i=1; 
//     int sum=0;
//     printf("enter the number\n");
//     scanf("%d,",a);
//     while (i<10)
//     {
//         s
//         printf("%d%d=%d ",a*i,i,sum);
//     }
    
    
// }

// write the code to find factorial of a number using while loop .
// #include<stdio.h>
// void main(){
//   int n,i=1,f=1;
//   printf("enter the number \n");
//   scanf("%d",&n);
//   while(i<=n){

//     f=f*i;
//     i++;
// }
//   printf(" factorial is :%d",f);
    
// }

//  write program to print integer values from 1 to 10 using do-while loop. 
// #include<stdio.h>
// void main(){
//     int i=1;
//     do{
//         printf("%d ",i);
//         i++;
//     }
//     while(i<10);
//     printf("%d",i);
// }

// #include<stdio.h>
// void main(){
//     do{
//         printf("GLA is BEST");
//     }
//     while(1);

// }

// write the programe usingd do while loop sumation of the 1 to 100 integer number .
// #include<stdio.h>
// void main(){
//     int i=1;
//     int sum=0;
//     do{
//         sum=sum+i;
//         i++;
//     }while(i<=100);
//     printf("%d",sum);
// }

// #include<stdio.h>
// void main(){
//     do{
//         printf("10\n");
//         do{
//             printf("20");
//         }while(0);
//     }while(0);
    


//  write the program 

// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=3;i++)
//     {
//         for(j=1;j<=3;j++)
//         {
//         printf("%d %d\n",i,j);
//         }
//     }
// }

//  write a program to print the pyramid "*" pattern 

// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main(){
//     int i,j;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//  write the program to print such pyramid
/
// #include<stdio.h>
// void main(){
//     int i,j,k;
    
// for(i=0;i<=5-1;i++){
//     for(j=0;j<=i;j++){
    
//     for(int k=0;k<=5-1-i;k++);{
//         printf("*"," ");
//     }
//     printf("\n");   
//     }
// }

// }

//heao sort program
// Heap Sort in C
 
#include <stdio.h>
 
// Function to swap the position of two elements
 
void swap(int* a, int* b)
{
 
    int temp = *a;
 
    *a = *b;
 
    *b = temp;
}
 
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int left = 2 * i + 1;
 
    // right = 2*i + 2
    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int N)
{
 
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
 
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
 
// A utility function to print array of size n
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver's code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}
 
// This code is contributed by _i_plus_plus_.