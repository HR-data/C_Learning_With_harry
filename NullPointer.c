/*
    --> Null pointer is a pointer which has a value reserved for 
        indication that the pointer or reference does not refer 
        to a valid object.

    --> A null pointer is guaranted to compare unequal to 
        any pointer that points to a valid object.

    --> Dreferncing a null pointer is undefined behavior in C , 
        and a conforming implementation is allowed to assume 
        that any pointer that is derefered is not null.

    --> A null pointer points null i.e. nothing.    
    --> A null pointer cannot be dereferenced.


*/
#include <stdio.h>
int main()
    {
        int a = 56;
        int *p = NULL;
        if(p != NULL)
            {
                printf("The value of a is %d \n",*p);

            }
        else
            {
                printf("The pointer is null , it cannot be dereferenced . \n");
            }

        return 0;
    }