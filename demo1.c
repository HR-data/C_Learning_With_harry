#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main ()
    {
        int m, n;
        printf("Enter the row and cols \n");
        scanf("%d %d",&m , &n);
        //mat(&a,&b);
        int P[m][n];
        printf("Enter P:");
        for (int i =0 ; i < m; i++)
            {
                for (int j =0 ; j < n; j++)
                    {
                        scanf("%ls",&P[i][j]);
                    }

            }
        for (int i =0 ; i < m; i++)
            {
                for (int j =0 ; j < n; j++)
                    {
                        printf("%ls",&P[i][j]);
                        printf("\t");
                    }
                printf("\n");
            }    

        
        return 0;
    }