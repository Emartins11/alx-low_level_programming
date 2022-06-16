#include<stdio.h>
#include "main.h"

/**
* print_square - check if a character is an alphabet
* @size: the character to be checked
*
*/

void print_square(int size)
{
int i;
int n;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (n = 0; n < size; n++)
putchar(35);
}
putchar('\n');
}
putchar('\n');


}
