/*
    we have to do extract content from html tag.
    input - <h1> This is Heading </h1>
    output - This is Heading
*/
#include<stdio.h>
#include<string.h>
 void parser(char *str)
    {
        int in = 0 ; // variable to track wether inside a tag 
        int index = 0;
        for(int i = 0; i < strlen(str);i++)
            {
                if(str[i]=='<')
                    {
                        in =1;
                        continue;
                    }
                else if (str[i]=='>')
                    {
                        in =0;
                        continue;
                    }
                if (in == 0)
                    {
                        str[index] = str[i];
                        index++;
                    }
            }
        str[index] = '\0';
    // now we will removie trailing spaces from begining
    
    while (str[0] ==' ')
        { // shift the string to the left
            for(int j = 0; j < strlen(str);j++)
                    {
                        str[j] = str[j+1];
                    }
        }

    // now we will removie trailing spaces from end

        while (str[strlen(str)-1] == ' ') 
        {
            str[strlen(str)-1] ='\0';
        }          
    

    
    }
int main()
    {
        char str[] = "<h1>    This is Heading   </h1>";
        //printf("%c \n",str[5]);
        parser(str);
        printf("The parsed string is --%s-- \n",str);

        return 0;
    }    