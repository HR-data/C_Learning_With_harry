#include<stdio.h>
#include<string.h>
typedef struct DriverData
    {
        char name[32];
        float liscence;
        char route[34];
        float dist;

    } dd;

int main()
    {
        dd d1 , d2 , d3 ;
        int n =3;
        printf("Enter the details of drivers.\n");
        printf("---------------------------------\n");
        for(int i =0 ; i < n ; i++)
            {
                printf("Enter the name \n");
                scanf("%s",&d1.name);
                printf("Enter the liscence number .\n");
                scanf("%f",&d1.liscence);
                printf("Enter the route \n");
                scanf("%s",&d1.route);
                printf("Enter the distance in kms \n");
                scanf("%f",&d1.dist);
                printf("Thank you for details \n");
                printf("---------------------------------------\n");
                
                printf(" Name = %s , Liscence = %0.2f , Route = %s , Distance = %0.2f \n",d1.name,d1.liscence,d1.route,d1.dist);

            }


        return 0;
    }    