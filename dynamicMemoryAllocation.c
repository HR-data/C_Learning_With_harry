/*
    what and why dynamic memory location ?
    --> Dynamic memory allocation is way in which the size of data structure
    can be changed during run time.

    --> Memory is very useful resource.
    --> This helps programmer to save meomry nad help in making of
        efficent code

    Memory assigned to aprogram in a typical architecturecan be broke down into four segements :
    1. Code 
    2. Static / global variables
    3. Stack 
    4. Heap.    --> In dynamic memory allocation , the memory allocated at runtime from the heap segement.
     We have four function to acheive dynamic memory alocation at heap is :
     1. malloc
     2. calloc
     3. realloc
     4. free

*/
#include<stdio.h>
#include<stdlib.h>  // library for calloc , malloc, realloc , free.
int main()
{
    int *ptr ;
    // use of malloc 
    int n ;
    printf("Enter the size of array you want . \n");
    scanf("%d",&n);
    ptr =(int*)malloc(n*sizeof(int));
    for(int i =0 ; i < n ; i++)
        {
            printf("Enter the value no. %d of this array. \n", i);
            scanf("%d",ptr+i); // ptr+i = &ptr[i]
        
        }
    for(int i =0 ;i < n ; i++)
        {
            printf("The value of array at %d is : %d .\n", i,ptr[i]);

        }    


    free(ptr);

    return 0;
}
