#include<stdio.h>
#include<stdlib.h>  // library for calloc , malloc, realloc , free.
int main()
{
    int *ptr ;
    // use of realloc 
    int n ;
    printf("Enter the size of array you want . \n");
    scanf("%d",&n);
    ptr =(int*)calloc(n,sizeof(int));
    for(int i =0 ; i < n ; i++)
        {
            printf("Enter the value no. %d of this array. \n", i);
            scanf("%d",ptr+i); // ptr+i = &ptr[i]
        
        }
    for(int i =0 ;i < n ; i++)
        {
            printf("The value of array at %d is : %d .\n", i,ptr[i]);

        }   

    int m ;
    printf("Enter the new size of array you want . \n");
    scanf("%d",&m);
    ptr =(int*)realloc(ptr,m*sizeof(int));
    for(int i =0 ; i < m ; i++)
        {
            printf("Enter the new value no. %d of this array. \n", i);
            scanf("%d",ptr+i); // ptr+i = &ptr[i]
        
        }
    for(int i =0 ;i < m ; i++)
        {
            printf("The New value of array at %d is : %d .\n", i,ptr[i]);

        }         


    free(ptr);

    return 0;
}
/*

    When you dont give values to array in calloc 
    it will intialise wthe value with 0.
    Intiallisation is not good sign in memor allocation.

    realloc is used for allocation other size to new array .
    like firstly you need size of array is 3 after some moment
    you need size of array is 2 or 4 or anything 
    In that case realloc will help dynamic changing of size of array
    and gives new array of desired size.




*/