/*
    In C library there is <string.h> libraray for string function.
    -> strcat() - used to concatenate given two or more strings.
    -> strlen() - used to show length of string.
    -> strrev() - used to show reverse of string.
    -> strcpy() - used to copy one string to another.
    -> strcmp() - used to compare two given string .

*/
#include<stdio.h>
#include<string.h>
int main()
    {
        char str1[] = "Harsh";
        char str2[] = "Raj";
        char s3[45];
       // puts(strcat(str1,str2));
        printf("The length of str1 is %d \n",strlen(str1));
        //printf("The reverse of str2 is :");
        //puts(strrev(str2));
        strcpy(s3,strcat(str1,str2));
        puts(s3);

        return 0;
    }