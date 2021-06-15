#include<stdio.h>
int arr[50];
int n;
void ReverseArray(int * ptr) // one way to reverse array
    {
        //printf("%d \n",n);
        for (int i =n-1 ;i >=0 ; i--)
            {
                printf("%d \n",*(ptr+i));
            }

    }

void arrayrev(int arr1[])  // by the help of swaaping arr[i] with arr[n-1-i]
    {

        for(int i = 0 ; i < n/2;i++)
            {
                int temp;
                temp = arr1[i];
                arr1[i] = arr1[n-1-i];
                arr1[n-1-i] = temp;
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
        printf("Your array after first tym reversing digits \n");
    
        ReverseArray(arr);  
        printf("Your array after second tym reversing digits \n");
        arrayrev(arr);
        for(int k = 0; k < n ; k++)
            {
                printf("%d  \n",arr[k]);
            }
      


        return 0;
    }