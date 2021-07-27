/*
     A void pointer is a pointer that has no data type associated with it.
     A void pointer can easily typecasted to any pointer type
     In simple language ,  it is general purpose pointer variable.
*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a = 12;
    float b = 98.674;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n",*((int*)ptr));
    /* We cant print by Direct dereferncing of void pointer
        what i mean is if there is void *ptr then 
        we cant use printf("%d",*ptr)---> This will throw error because pointer does not know which data type it is, actually its void.
        So we use indirect way by typecasting of leeting know pointer that which dataa type you are.
        printf("%d\n",*((int *)ptr))  --> this will print on console.
    */
    ptr = &b;
    printf("The value of b is %0.2f \n",*((float*)ptr));


    return 0;
}
// Void pointer is empty box(which can carry address) where you can put whatever you want whenever you need