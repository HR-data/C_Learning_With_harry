#include<stdio.h>
#include<string.h>
struct student
    {
        int id;
        int marks;
        char favchar ;
        char name;
    };

int main()
    {
        struct student harry;
        harry.name = 'Harsh';
        printf("%s \n", harry.name);
        return 0;
    }    