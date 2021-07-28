#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int GenerateRandomNumber(int n)
    {
        srand(time(NULL));
        int num = rand() % n;
        return num;
    }
int compare(char a , char b)
    {
        if ( a == b)
            {
                return -1;
            }
        else if (( a == 'P') && (b == 'R'))
            {
                return 1;
            }
        else if (( b == 'P') && (a =='R'))
            {
                return 0;
        
            }   
        else if (( a == 'R') && (b =='S'))
            {
                return 1;
            }
        else if (( b == 'R') && (a =='S'))
            {
                return 0;
            }
        else if (( a == 'S') && (b =='P'))
            {
                return 1;
            }
        else if (( b == 'S') && ( a =='P'))
            {
                return 0;
            }                                                         
    }


int main()
    {
        printf("Lets Play Noobie ! \n");
        printf("---------------------------------\n");
        char *Name,*Playerchar , *Compchar;
        int compscore = 0, playerscore = 0;
        Name = (char*)malloc(5*sizeof(char));
        Playerchar = (char*)malloc(5*sizeof(char));
        Compchar = (char*)malloc(5*sizeof(char));
        char dict[] = {'R' , 'P', 'S'};
        printf("Enter your Name . \n");
        gets(Name);
        printf("-----------------------------------------\n");
        printf("-----------------------------------------\n");


        printf("Welcome to Rock , Paper , Scissor !  ");
        puts(Name);
        printf("-----------------------------------------\n");
        for(int i = 0 ; i < 3 ; i++) 
        {
        // Taking Input from user
            printf("Hey %s ! Choose One From R for rock , P for paper, S for scissor.\n\n",Name);
            scanf("%c",&Playerchar);
            getchar();
            printf("You choose %c \n",Playerchar);
            

            // Generate Rock Paper scissor in comp
            Compchar = dict[GenerateRandomNumber(3)];
            printf("CPU choose %c \n",Compchar);

            // compare the score

            if (compare(Compchar,Playerchar) == 1)   
                {
                    compscore += 1;
                    printf("CPU got it \n");
                } 
            else if (compare(Compchar,Playerchar) == 0)
                {
                    playerscore += 1;
                    printf("You got it ! \n");
                }
            else
                {
                    compscore += 1;
                    playerscore += 1;
                    printf("Its a draw \n");
                    
                }
            printf("YOU : %d \nCPU : %d \n",playerscore,compscore);    
            printf("-----------------------------------------\n\n");

        }
    if (compscore > playerscore)
        {
            printf("CPU won the game ! \n");
        }
    else if (compscore < playerscore)
        {
            printf("You won the game !\n");
        }
    else
        {
            printf("Its a draw ! \n");
        }        
        
        return 0;
    }