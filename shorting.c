
    #include <stdio.h>
    void main()
    {
 
        int i, j, temp, size, a[30];
        printf("Enter the size of the array:\n");
        scanf("%d", &size);
 
        printf("Enter the element in array:\n");
        for (i = 0; i<size; i++){
             scanf("%d", &a[i]);
        }
            for(i=0;i<size;i++){
                for(j=i+1;j<size;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
 
 
        printf("The numbers arranged in ascending order are given below:\n");
        for (i = 0; i<size; i++)
            printf("%d\n", a[i]);
 
    }
