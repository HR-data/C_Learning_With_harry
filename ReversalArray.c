#include<stdio.h>
int arr[50];
int n;
void ReverseArray(int * ptr)
    {
        //printf("%d \n",n);
        for (int i =n-1 ;i >=0 ; i--)
            {
                printf("%d \n",*(ptr+i));
            }

    }
int input(int m)      // function for taking from input from user
    {
        
        
        for(int i = 0; i < m ; i++)
            {
                scanf("%d",&arr[i]);
            }
        return 0;
    }


int main()
    {
        //int n; //int arr1[50];
        printf("How many integers you want to put in array ? \n");
        scanf("%d",&n);
        if(n > 50)
            printf("Enter number less than 50 \n");
        printf("Enter the %d integers for making array \n",n);
        input(n);
        // printing array
        printf("Your array before being reversed \n");
        for(int j = 0; j < n ; j++)
            {
                printf("%d  \n",arr[j]);
            }
        printf("Your array after reversing digits \n");
    
        ReverseArray(arr);    


        return 0;
    }