#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char a[10] ="Ram",c[10] = "sRam";
    int value = strcmp(a,c);
    printf("%d\n",value);


    return 0;
}