#include<stdio.h>
#include "main.h"

/**
* more_numbers - check if a character is an alphabet
*
*/

void more_numbers(void)
{
int x;
int n;
int count = 0;
while (count < 10)
{
for (x = 48; x <= 49; x++)
{
for (n = 48; n <= 57; n++)
{
if (x == 49 && n <= 52)
{
putchar(x);
}
else if (x == 49 && n > 52)
{
break;
}
putchar(n);

}
}

putchar('\n');
++count;
}
}
