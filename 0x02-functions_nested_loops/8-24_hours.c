#include<stdio.h>
#include "main.h"

/**
* jack_bauer - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

void jack_bauer(void)
{
int x;
int y;
int a;
int b;
for (x = 0; x <= 2; x++)
{
for (y = 0; y <= 3; y++)
{
for (a = 0; a <= 5; a++)
{
for (b = 0; b <= 9; b++)
{
printf("%d", x);
printf("%d", y);
printf(":");
printf("%d", a);
printf("%d", b);
printf("\n");
}
}
}
}

}
