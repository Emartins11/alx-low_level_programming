#include<stdio.h>
#include "main.h"

/**
* _abs - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

int main(void)
{
int x;
int f1;
int f2;
int nxt;
f1 = 1;
f2 = 2;

printf("%d", f1);
for (x = 2; x <= 50; x++)
{
printf("%d", f2);
nxt = f1 +f2;
f1 = f2;
f2 = nxt;
}

return (0);
}
