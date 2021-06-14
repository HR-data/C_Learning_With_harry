/*
    Add(a,b) --> This function is called and values inside is
    actual parameter or argument.

    int Add(int m , int n) --> when we write function the parameter inside
    is formal parameter i.e int m and int n.
    when we call the function then copy of argument passes to formal parameter.
    Note -> Not actual value is passesd. This is call by value.
         -> we cant change the value in formal parameter
         that means let say Add(2,3) -> 2 and 3 are argument which is passed
         when we talk about function int swap(a,b) in that copy of 2 and 3 goes inside
         and that cant be changed.
         Let say function is called Add(2,3)
         that is int Add (int a , int b)
                        {
                            return a + b;
                            here lets change a =9 , b=10;
                            this will throw error that emans we cant
                            change that value 
                            because it is called by value.
                        } 
    Here we go with call by refrence in which we handle the address of value
    in this we can change and play with value.
    what i mean is 
    add(&a,&b) --->  here we are passing addres
    and in function int add(int* a, int* b) -->  here we are passing pointer 
                            {
                                *a = 2; by the help of derefrencing 
                                       we can change the value whatever 
                                       passed in called function.
                                *b =3;

                                return *a + *b ;

                            }

    conclusion --> we only pass copy of value in call by value
               --> we can change values in call by refrence with
                   the help of pointer and dereferncing.

*/


#include<stdio.h>
int main()
    {
        int a , b;
        printf("Enter a and b . \n");
        scanf("%d %d",&a,&b);
        printf("Value of a = %d and value of b =%d \n",a,b);
        Add_Sub(&a,&b);
        swap(&a,&b);
    
        return 0;
    }
int Add_Sub(int *m,int *n)
    {
        int i = *m + *n ;
        int j = *m - *n ;
        printf("Value of a = %d and Value of b = %d \n",i,j);


        return 0;
    }    
int swap(int *x,int *y)  // swaping two numbers
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
        printf("Value of a = %d and b = %d after swapping \n",*x,*y);

        return 0;
    }    