/*
    We will amke function , switch case to built star pattern.
    we take number of rows in star pattern from user.
    and 0 for trianglular start pattern and 1 reverse triangular
    start pattern
    and 2 for box type start pattern

*/
#include<stdio.h>
int main()
    {
        int n,m;
        printf("Enter the number of rows .\n");
        scanf("%d",&n);
        printf("Enter 1 for reverse star pattern , 0 for star pattern and 2 for block pattern.\n");
        scanf("%d",&m);
        switch(m)
            {
                case 0:
                        starpattern(n);
                        break;
                case 1:
                        Reversestarpattern(n);
                        break;
                case 2:
                        blockpattern(n); 
                        break;       
                default :

                        printf("You have entered the wrong value . \n");
                        break;        
            }

        

        return 0;
    }
 void starpattern(int n)
    {
        int i,j;
        for(i=0;i<n;i++)
            {
                for(j=0;j<=i;j++)
                    {
                        printf("* ");

                    }

                printf("\n");        
            }


    }    


// for reverse start pattern
void Reversestarpattern(int n)
    {
        int i,j;
        for(i=0;i<n;i++)
            {
                for(j=0;j<=n-i-1;j++)
                    {
                        printf("* ");

                    }

                printf("\n");        
            }
    }        

// block pattern

void blockpattern(int n)
    {
        int i,j;
        for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                    {
                        if (i == 1 || j == n || i == n || j == 1)
                            printf("* ");
                        else
                            printf("  ");
                    }

                printf("\n");        
            }


    }        