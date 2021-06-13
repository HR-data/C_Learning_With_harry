/*
    We will take input from user 0 for triangluar star pattern
    and 0 for reversed traingular star pattern
*/
#include<stdio.h>
int main()
    {
        int i,j,n;
        printf("Enter 0 for traingluar star pattern and 1 for revrsed traingular star pattern \n");
        scanf("%d",&n);
        if(n == 0)
            {
                for(i=1;i<=5;i++)
                    {
                        for(j=1;j<=i;j++)
                            {
                                printf("* ");


                            }   
                        printf("\n");


                     }

            }
        else if (n == 1)
            {
                for(i=1;i<=4;i++)
                    {
                        for(j=1;j<=4-i+1;j++)
                            {
                                printf("* ");


                            }
                        printf("\n");    
                    }

            }    
        

        return 0;
    }    