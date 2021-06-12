#include<stdio.h>
// Pointer and Array arthemetic
// we will talk about basic pointer arthemetic.

int main()
    {
        int a = 5;
        int* ptr = &a;
        printf("Size of int is %ld \n",sizeof(int));
        printf("%d \n",ptr);
        printf("%d \n",ptr+1);
        printf("%d \n",ptr-1);

        /*

            We are seeing output that address of pointer are differ 
            by size of int .In my computer sizeof(int) is 4.It varies to different
            artitechure of computer.  

        */
        return 0;
    }