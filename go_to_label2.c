//Goto statement and label
/*
    used to transfer program control to label
    Goto statement is preferable in breaking multiple loops
     
     Lets create program where we take input 0 from user to 
     end the program. We can use break  but break only exit 
     from above loop not from whole program.
     we want to terminate the program by clicking 0  by user.
*/
#include<stdio.h>
int main()
    {
       int num;
       int i,j;
       for(i=0;i<8;i++)
            {
                printf("%d \n",i);
                for(j=0;j<8;j++)
                    {
                        printf("Enter the number & Enter zero to exit \n");
                        scanf("%d",&num);
                        if(num==0)
                            {
                                //break; // read above comment
                                goto end;
                            }
                        
                    }

            } 
            end:
        return 0;
    }

   