#include<stdio.h>
#include "main.h"

/**
* main - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

int main(void)
{
long x;
long f1;
long f2;
long nxt;
f1 = 1;
f2 = 2;

printf("%ld", f1);
printf(", ");
for (x = 2; x <= 50; x++)
{
printf("%ld", f2);
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
