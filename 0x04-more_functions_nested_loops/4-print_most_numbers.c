#include<stdio.h>
#include "main.h"

/**
* print_most_numbers - check if a character is an alphabet
*
*/

void print_most_numbers(void)
{
int x;
for (x = 48; x <= 57; x++)
{
if (x != 50 && x != 52)
{
putchar(x);
}
}
putchar('\n');

}
