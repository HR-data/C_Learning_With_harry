/* # local variable
    scope is a region of programm where defined variable 
    can exist and beyond which cant be accesed.

    variable which accesed inside function is called local variable.
    ------------------------------------------------------------------
    # global varibale
    variable which is defined outside main method is called global variable.

    global variable is acceseble through out the entire programm from any function.

    If local and gloabl variale have same same , then local variable is
    take prefence.
    ---------------------------------------------------------------------------
    # static variable
    static data type name = value ;
    example static int a =67;

    static varibales which have property of 
    preserving their values when they go out of scope

    They preserve their value from the previous scope 
    and are not intialized again

    static variable remains in memory througout the span of program.

    static varibale are intialized to 0 if not intialized explicitly

    In C , static varibles can only be intializes 
    using constnt literals.
    
    static varibale call once and intact their value.

*/
#include<stdio.h>
#include<string.h>
int func1(int b)
{
    static int myvar = 0;
    printf("The value of myvar is %d \n",myvar);
    myvar++;

    return b +myvar;
}
int main()
    {
        int b = 654;
        int val = func1(b);
        val = func1(b);
        val = func1(b);

        return 0;
    }