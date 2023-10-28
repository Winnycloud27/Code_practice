#include <stdio.h>
#include <math.h>

void fun1(int n);
void fun2(int n);

int i; /*A global variable that will be accessed by all the function*/

void main()
{
    printf("Enter a number to check for\n");
    scanf("%d", &i); /*An address for the global variable above*/

    fun1(i);
    printf("\n");
    fun2(i);

    printf("\n");
}

/**
* fun1 - A recursive non-tail function that calculate the binary of a decimal
* @n: The number being calculated
* Return: void.
*/
void fun1(int n)
{
    if (n == 0)
    return;
    fun1(n/2);
    printf("%d", n % 2);
}

void fun2(int n)
{
    if (n == 0)
    return;
    printf("%d ", n);
    fun2(n*2);
    printf("%d ", n);
}