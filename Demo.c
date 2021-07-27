#include<stdio.h>
#include<string.h>
#include<time.h>
int GenerateRandomNumber(int a)
    {
        srand(time(NULL));
        int num = rand()% a;
        return num;
    }

int main()
    {
        
       
        int n = GenerateRandomNumber(3);
        printf("%d \n", n);
            
    }        