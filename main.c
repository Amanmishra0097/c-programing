// // #include <stdio.h>

// // void main(){
// //     int n, i, sum = 0;
// //     printf("enter the number to be checked: ");
// //     scanf("%d", &n);
// //     for (i = 1; i <=n/2; i++)
// //     {
// //         /* code */
// //         if(n%i==0){
// //             sum += i;
// //         }

// //     }
// //     if (sum == n)
// //     {
// //         /* code */
// //         printf("%d is a perfect number\n", n);

// //     }
// //     else{
// //         printf("%d is not a perfect number\n", n);
// //     }

// // }

// #include <stdio.h>

// void main()
// {
//     int n, i, prime = 1, l_l, u_l, j;
//     printf("enter the lower limit:");
//     scanf("%d", &l_l);
//     printf("enter upper limit ");
//     scanf("%d", &u_l);
//     for (j = l_l; i <= u_l; j++)
//     {
//         n = j;
//         prime = 1;
//         for (i = 2; i <= n / 2; i++)
//         {
//             /* code */
//             if (n % i == 0)
//             {
//                 /* code */
//                 prime = 0;
//                 break;
//             }
//         }
//         if (prime == 1)
//         {
//             /* code */
//             printf("%d ", n);
//         }
//     }
// }