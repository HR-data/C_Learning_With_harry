/*
    Unintialized pointer is called wild pointer.
    These pointers points to any arbitray location.
    If we try to drefernce then our programm will crash.
    It will produce nasty bugs, Thats why we used to make it NULL .

*/
#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int a = 34;
        int *ptr ; // wild pointer
        //*ptr = 67; // this not good thing to do 
        ptr = &a; // no longer wild pointer
        return 0;
    }