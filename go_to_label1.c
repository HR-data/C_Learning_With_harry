//Goto statement and label
/*
    used to transfer program control to label
    Goto statement is preferable in breaking multiple loops

*/
#include<stdio.h>
int main()
    {
        label :
            printf("We are inside label ! \n");
            goto end;
        printf("We are not inside lable ! \n");
        goto label;
        // This is infinite loop ! so i am commenting that
        end :
            printf("we are at end ! \n");
        return 0;
    }

    /*
        if we dont give any end statement then it will go infinite loop
        if we give end statement with label then it wont give that statemnt 
        we are not inside label !
    */