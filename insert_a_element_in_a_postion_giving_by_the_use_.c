#include <stdio.h>
void main()
{
    int array[6], position,i,n,value;
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter %d element\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the location where you insert position:\n");
    scanf("%d", &position);

    printf("Enter the vlue you want insert:\n");
    scanf("%d", &value);
    for (i = n - 1; i >= position; i--)
    {
        array[i] = array[i-1];
    }
    array[position - 1] = value;

    printf("result array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}