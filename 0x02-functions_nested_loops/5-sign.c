#include<stdio.h>
#include "main.h"

/**
* _isalpha - check if a character is an alphabet
* @n: the character to be checked
* Return: 1 if lower and 0 if not
*/

int _isalpha(int n)
{
if  (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n = 0)
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
