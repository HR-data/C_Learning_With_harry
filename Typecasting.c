#include<stdio.h>
/*
    Typecasting is used for changes one data typr to another 
    like int to float.
    syntax -> (type)value
    if we do any calculation in int int then result would be int,
    if we do calcu;ation in float int then result would be float,
    if we do in float and flat then result would be float.
*/
int main()
    {

        int a = 40;
        float b = 96.5;
        printf("%f \n",(float)a);
        printf("%d \n",(int)b);
        float c = 69/4;
        float d = (float)69/4;
        printf("%f \n",c);
        printf("%f \n",d);
        // we can see here the calculation what is giving.
        // int-int -> int
        // int-float -> float
    

        return 0;
    }






