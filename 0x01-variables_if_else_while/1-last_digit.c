#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Entry
*
* Return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

string convrsn = sprintf(n);
int ld = convrsn[convrsn.length() - 1]

printf("Last digit of %d", n);
printf(" is %s", ld);

if (ld > 5)
{
	printf(" and is greater than 5\n");
}

else if (ld == 0)
{
	printf(" and is 0\n");
}

else
{
	printf(" and is less than 6 and not 0\n");
}

return (0);
}
