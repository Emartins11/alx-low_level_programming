#include<stdio.h>
#include "main.h"

/**
* main - Entry
*
* Return: Always 0
*/

void print_alphabet(void) /* to print alphabet */
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');
}
