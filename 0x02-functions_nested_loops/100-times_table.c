#include<stdio.h>
#include "main.h"

/**
* print_times_table - check if a character is an alphabet
* @n: the character to be checked
* Return: 1 if lower and 0 if not
*/

void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{
int i;
int j;
for (i = 0; i <= n; i++)
{
if (i == 0)
{
for (j = 0; j <= i + n; j++)
{
printf("%d", i);
if (j < i + n)
{
printf(",  ")
}
}
}
else
{
for (j = 0; j <= i * n; j++)
{
if (j % i == 0)
{
printf("%d", j);
if (j < i * n)
{
printf(",  ")
}
}
}
}
putchar('\n');
}
}
}
