/*
    Is string is data type in C? No
    --> Then how we write "Harry" in C
    --> we take character array inc to represent string in C.
    --> how we will terminate character array ? using \0 
    --> \0 is null character which have ASSCI value is zero.
    String -> Array of character which is terminated by \0.

    Taking input string by user
    char str[52];
    gets(str);  --> gets can take input string , function from stdio.h.
    printf("%s",str);  --> for printing string %s
    puts(str); // aliter --> or you can use puts for printing string

*/
#include<stdio.h>

void printstr(char str[])
    {
        int i = 0;
        while (str[i] != '\0')
            {
                printf("%c",str[i]);
                i++;
            }
        printf("\n");
    }

int main()
    {
        //char str[] = {'H','e','l','l','o','w','\0'};
        // char str[] = "Hellow";
        // lets take charcter array input from user.
        char str[];
        printf("Enter the string \n");
        gets(str);  // input string from user.
        printf("\n");
        printf("Printing character by using custom function printstr() \n");
        printstr(str);
        printf("\n");
        printf("Printing string by puts(str) \n");
        puts(str);
        printf("\n");
        printf("Using printf prinitng strings\n%s\n",str);


        return 0;
    }    