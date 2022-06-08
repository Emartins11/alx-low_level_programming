#include<stdio.h>
#include "main.h"

/**
* main - Entry
*
* Return: Always 0
*/

/* to print alphabet */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');
}
