#include<stdio.h>
#include "main.h"

/**
* print_to_98 - check if a character is an alphabet
* Return: 1 if lower and 0 if not
*/

void print_to_98(int n)
{
int x;
if (n <= 98)
{
for (x =n; x <= 98; x++)
{
_putchar(x);
_putchar(',');
_putchar(' ');
}
}
else 
{
for (x = n; x >= 98; x--)
{
_putchar(x);
_putchar(',');
_putchar(' ');
}
}

}

