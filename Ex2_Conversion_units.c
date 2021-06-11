/*
    we have to take input from user which kind of conversion
    they would like to convert.
    
    km to miles
    inches to foot
    cm to inches
    pound to inches
    inches to meter

*/
#include<stdio.h>
float km(float);
float inch(float);
float cm(float);    // intialisation
float pound(float);
float inch1(float);
int main()
    {
        char c;
        printf("What kind of conversion you want 1) kms to miles 2)inches to foot 3)cm to inches 4)pound to kg 4)inches to meter :\n");
        printf("Type q for exit the program \n");
        scanf("%c",&c);
        if(c == '1')
            {
                float num1;
                printf("Enter the number \n");
                scanf("%f",&num1);
                float res1 = km(num1);
                printf("%0.2f km = %0.2f miles \n",num1,res1);


            }
        else if(c == '2')
            {
                float num2;
                printf("Enter the number \n");
                scanf("%f",&num2);
                float res2 = inch(num2);
                printf("%0.2f inches = %0.2f foot \n",num2,res2);

            }
        else if(c == '3')
            {
                float num3;
                printf("Enter the number \n");
                scanf("%f",&num3);
                float res3 = cm(num3);
                printf("%0.2f cms = %0.2f inches \n",num3,res3);

            }
        else if(c == 'q')
            {
                goto end;
            } 

        end:               

        return 0;
    }

float km(float n)
    {
        
        
        
        return n*0.624;

    }    

float inch(float m)
    {
        
        return m*0.083;
    }    
float cm(float m)
    {
        
        return m*0.393;
    }        