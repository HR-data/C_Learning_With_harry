/*
    #Union is user defined data type.(similar to struture)
    #The differencee between union and structure is that in structure
    each memeber has its own storage location whereas members of union 
    uses single shared memory location.
    --> single shared meomory location is equal to the
        size of its largest member data type.
    note - union cannot handle all memeber at once.
    bcz of single shared memory allocation.

    union test
    {
        int a;
        float b;
        char c;
    }un;    
 for accessing the member un.a , un.b , un.c ;
*/


#include<stdio.h>
#include<string.h>
union student
    {
        char favchr ;
        char name[76];
        int id;
        int marks;
        
    };

int main()
    {
        union student harry , michael ,rishi;
        harry.id = 67;
        harry.marks =90;
        harry.favchr ='G'; // the thing which is defined last will show correct rest will give garbage value
        strcpy(harry.name,"Harsh");
        printf("Harry got marks is %d \n",harry.marks);
        printf("Name of harry is %s \n",harry.name);
        printf("Fav charcter of harry is %c \n",harry.favchr);
        return 0;
    }    