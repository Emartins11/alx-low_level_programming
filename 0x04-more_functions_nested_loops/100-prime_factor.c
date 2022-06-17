#include<stdio.h>
#include "main.h"

/**
* main - check if a character is an alphabet
*
* Return: 1 if lower and 0 if not
*/

int main(void)
{
long long x;
long long y;
long long number;
long long result;
number = 612852475143;
result = number;
for (x = 2; x <= number; x++)
{
if (result % x == 0)
{
y = x;
result = result / x;
while (result % x == 0)
{
result = result / x;
}
}
}
printf("%lld\n", y);


return (0);

}
