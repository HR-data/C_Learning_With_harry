/*
    typedef is used o give nickname for long varilable 
    example unsinged long is quite long to type 
    again and again.
    so what we do
    --> typedef unsigned long ul;
    now we can use ul instead of unsigned long frequently.


*/
#include<stdio.h>
#include<string.h>

typedef struct student
    {
        int roll_no;
        char name[52];
        float marks;
    } std;
// now we dont need to use dtruct student s1, s2,
// we can use std s1, s2;
// by the way after typedef too you can use orginal one.

int main()
    {
        std s1, s2;
        struct student s3,s4;    /* here you can see we can use 
                                 both nickname and long name too
                                 that is struct student and std.
                                */
        s1.roll_no = 1;
        s2.roll_no = 2;
        s3.roll_no = 3;
        printf("The roll no. of s1 is %d \n",s1.roll_no);
        printf("The roll no. of s2 is %d \n",s2.roll_no);
        printf("The roll no. of s3 is %d \n",s3.roll_no);



        return 0;
    }