#include<stdio.h>
#include "main.h"

/**
* times_table - check if a character is an alphabet
* Return: 1 if lower and 0 if not
*/

void times_table(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
if (i == 0)
{
for (j = 0; j <= i + 9; j++)
{
printf("%d", i);
if (j < i + 9)
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
}
else
{
for (j = 0; j <= i * 9; j++)
{
if (j % i == 0)
{
printf("%d", j);
if (j < i * 9)
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
}
}
putchar('\n');
}

}
