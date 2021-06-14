/*
    We can Pass array to function and modify its data 
    easily with pointers.

*/

#include<stdio.h>
int func2(int*);
int main()
    {
        int arr[]={20,56,78,39,510};
        // printf("The value of array at 0 is %d \n",arr[0]);
        func2(arr);
        // printf("The value of array at 1 is %d \n",arr[1]);
        printf("------------------------------- \n");
        func2(arr);
        return 0;
    }
int func2(int *ptr)
    {
        for(int i=0;i<=4;i++)
            {
                printf("The value of array at %d is %d \n",i,*(ptr+i));
                // *(ptr+i) = ptr[i]
            }
        *(ptr+1)=786; // if you cange any value here its gets reflected in main()   
        return 0;
    }
