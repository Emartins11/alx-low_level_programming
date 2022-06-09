#include<stdio.h>
#include "main.h"

/**
* main - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

int main(void)
{
uint x;
uint f1;
uint f2;
uint nxt;
f1 = 1;
f2 = 2;

printf("%d", f1);
printf(", ");
for (x = 2; x <= 50; x++)
{
printf("%d", f2);
if (x < 50)
{
printf(", ");
}
else
{
printf("\n");
}
nxt = f1 + f2;
f1 = f2;
f2 = nxt;
}

return (0);
}
