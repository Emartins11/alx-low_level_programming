#include<stdio.h>
#include "main.h"

/**
* print_diagonal - check if a character is an alphabet
* @n: the character to be checked
*
*/

void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
putchar(92);
putchar('\n');
putchar(' ');
}
}
putchar('\n');


}
