/*

    What is structure?
    ->structure is user defined dta type # not predefine as int , achar are 
    defined.
    we cant able to define int char together in array its quite diffcult in c.
    so we used to play with strucure
    ------------------------------------------------------------------------
    --> structure allow to combines different data types together.
    -->it is used to define complex data type of various information
    -- it is similar to array but sturucture can store data of any type

    syntax is -->           
    struct Name                
        data type 1
        data type 2
            .
            .
            .
        data type n    

    } [structure variable];

    example-->
    sturct Employee
    {                            
        int id;
        flaot marks;
        char name;

    };
    int main()
        {
            sturcture employee e1;
            e1.id=34;
            e1.name='harsh';
            e1.marks-89.65;
            return 0;
        }

*/
#include<stdio.h>
#include<string.h>
struct student
    {
        char favchr ;
        char name[76];
        int id;
        int marks;
        
    };

int main()
    {
        struct student harry , michael ,rishi;
        harry.id = 67;
        harry.marks =90;
        harry.favchr ='G';
        strcpy(harry.name,"Harsh");
        printf("Harry got marks is %d \n",harry.marks);
        printf("Name of harry is %s \n",harry.name);
        printf("Fav charcter of harry is %s \n",harry.favchr);
        return 0;
    }    