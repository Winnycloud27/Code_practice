#include <stdio.h>

/**
 * fact - A recursion function that calculate the factorial
 * of a given number when called.
 *
 * Return: (1) if condition is true otherwise
 * returns n * fact(n - 1).
*/
int fact(int n)
{
    if (n == 1)
    return (1);

    else
    return n * fact(n - 1);
}

/**
* main - The entry point of the program
* where the user is asked for an input to 
* calculate for, the input obtained is used
* then assigned to the function "fact()"
*
* Return: 0, end program
*/
int main(void)
{
    int a;

    printf("Enter the number that you want to calculate for \n");
    scanf("%d", &a);

    printf("The factorial of %d is %d\n", a, fact(a));
    return (0);
}