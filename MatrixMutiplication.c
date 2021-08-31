#include<stdio.h>


void MAT(int *row, int *col)
    {
        int M[*row][*col],N[*row][*col];
        printf("Enter the M :");
        for(int i = 0 ; i < *row ; i++)
            {
                for(int j = 0 ; j < *col ; j++)
                    {
                        scanf("%d",&M[i][j]);
                    }

            }
        printf("M : ");    
        for(int i = 0 ; i < *row ; i++)
            {
                for(int j = 0 ; j < *col ; j++)
                    {
                        printf("%d",&M[i][j]);
                        printf("\t");
                    }
                printf("\n");
            }            
        printf("Enter the N :");
        for(int i = 0 ; i < *row ; i++)
            {
                for(int j = 0 ; j < *col ; j++)
                    {
                        scanf("%d",&N[i][j]);
                    }

            }
        printf("N : ");    
        for(int i = 0 ; i < *row ; i++)
            {
                for(int j = 0 ; j < *col ; j++)
                    {
                        printf("%d",&N[i][j]);
                        printf("\t");
                    }
                printf("\n");
            }               

    }

int  main()
    {
        // Taking input from user the number of rows and column.
        int nrow ;
        int ncol ;
        printf("Enter the number of rows .\n");
        scanf("%d",&nrow);
        printf("The number of rows  is %d.\n",nrow);
        printf("Enter the number of columns .\n");
        scanf("%d",&ncol);
        MAT(&nrow,&ncol);
        




        return 0;
    }