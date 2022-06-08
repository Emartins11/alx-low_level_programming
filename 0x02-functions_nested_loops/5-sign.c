#include<stdio.h>
#include "main.h"

/**
* print_sign - check if a number is positive or not 
* @n: the number to be checked
* Return: 1 if positive, 0 if 0, and -1 if negative
*/

int print_sign(int n)
{
if  (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}

}
