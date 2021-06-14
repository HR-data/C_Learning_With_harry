#include<stdio.h>
int main()
    {

        int a[] = {1,2,3,4};
        printf("%d \n",a);
        a[3]=89;
        printf("%d \n",*(&a[3]));

        return 0;
    }