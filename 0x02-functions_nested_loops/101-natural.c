#include<stdio.h>
#include "main.h"

/**
* sum_multiples - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

int sum_multiples(void)
{
int x;
int sum;
sum = 0;
for (x = 3; x < 1024; x++)
{
if (x % 3 == 0 || x % 5 == 0)
{
sum += x;
}
}
return (sum);

}
