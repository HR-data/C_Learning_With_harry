/*
    Here we learn about the realtion between array and pointer.
    -> arr[] ={1,2,3,4} (this is array of size 4 with same type of value)
    -> arr = &arr[0] --> This means arr is pointer which contains address
    of first element in array.
    ---------------------------------------------------------------
    -> If we add any number in arr i.e arr+1 or arr+2
    it means pointer arr move to another address
    Lets say int take size 4 and address of arr is 1000 then 
    if we add arr+1 it will give address is 1004
    overall it means it moves to second element in array 
    Note- it only contains address not value of it.
    ----------------------------------------------------------------
    -> So arr+1 = &arr[1].
    -----------------------------------------------------------------

    let see how to fetch value with the help of pointers in array,
    --> arr[0]=*(arr) [dereferencing method] it will give us value of 
    first element in array.
    ---> arr[0]=*(arr) = *(&arr[0]) -> this also gives first element 
    of array. arr[1] = *(arr+1) = *(&arr[1]) This will give value of
    second element.
     ----------------------------------------------------------------
    lets do some code on it.
*/
#include<stdio.h>
int main()
    {

        int arr[] = {23,24,56,78,60}; // this is our array of size 5.
        //Lets print the address of first and second element in array.
        printf("The address of first element in array is %d : \n",arr);
        printf("The address of first element in array is %d : \n",&arr[0]);
        printf("------------------------------------------------ \n");
        printf("The address of second element in array is %d : \n",&arr[1]);
        printf("The address of second element in array is %d : \n",arr+1);
        printf("------------------------------------------------ \n");
        // Lets print the value of first and third value of array.
        printf("The value at address for first element in array is %d : \n",arr[0]);
        printf("The value at address for first element in array is %d : \n",*(&arr[0]));


        printf("------------------------------------------------ \n");

        printf("The value at address for third element in array is %d : \n",arr[2]);
        printf("The value at address for third element in array is %d : \n",*(&arr[2]));
        printf("The value at address for third element in array is %d : \n",*(arr+2));
         /*
            We will see all the values by different method will gives 
            same address and their respective values.
            pointer is goof for memory allocationand increase the efficiency of code.
            And saves memory.

          */  
        return 0;
    }