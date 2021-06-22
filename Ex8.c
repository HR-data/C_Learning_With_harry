#include<stdio.h>
#include<stdlib.h>
int main()
    {
        char *ptr;
        int n = 3;
        // Lets begin dynamic memmory allocation
        
        for(int i =0 ; i < n ; i++)
            {
                int m ;
                printf("Enter the number of characters in Employee Id.\n");
                scanf("%d",&m);
                ptr = (char *) malloc(m*sizeof(char));
                
                printf("Enter your Employee id . \n");
                scanf("%s",ptr);
                
                printf("Your Employee id is %s \n",ptr);
                printf("-------------------------\n");
                  
            

            }
        free(ptr);
        return 0;
    }