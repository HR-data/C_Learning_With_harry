/*
    We can Pass array to function and modify its data 
    easily with pointers.

*/

#include<stdio.h>
int func1(int*);
int main()
    {
        int arr[]={2,5,8,9,10};
        printf("The value of array at 0 is %d \n",arr[0]);
        func1(arr);
        printf("The value of array at 0 is %d \n",arr[0]);

        return 0;
    }
int func1(int array[])
    {
        for(int i=0;i<=4;i++)
            {
                printf("The value of array at %d is %d \n",i,array[i]);

            }
        array[0]=786; // if you cange any value here its gets reflected in main()   
        return 0;
    }
