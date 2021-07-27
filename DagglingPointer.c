/*
    A pointer is pointing to freed location or the lpcation has been delted is called
    daggling pointer.

    Causes of daggling pointer --> deallocation of memory
                               --> returning local variables in function calls
                               --> variable going out of scope
    It is not good for c prograam.
    It can introduce bugs in prograam.
    so aftre frreing a pointer, we must de allocation pointer will NULL.



*/
#include<stdio.h>
#include<stdlib.h>
int *functionDaggling()
    {
        int a , b ,  sum;
        a = 20;
        b = 30;
        sum = a + b;
        return &sum;

    }
int main()
    {
        // case 1 : Deallocation of memory block
        int *ptr = (int*)malloc(6*sizeof(int));
        ptr[0] = 1;
        ptr[1] = 2;
        ptr[2] = 28;
        ptr[3] = 45;
        free(ptr); // Now pointer is daggling pointer.

        //case 2 : function returning local variable address.
        int *PtrDaggling = functionDaggling() ;// Now pointer is daggling pointer.

        // case 3 : If variable gors out of scope
        int * dagptr;
        {
            int a = 56;
            dagptr = &a;
        }
        // Here variable goes out of scope and dagptr is now freed
        // and hence it is daggling pointer.


        return 0;
    }