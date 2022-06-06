#include<stdio.h>

/**
* main - Entry
*
* Return: Always 0
*/

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q')
    continue;
else if (x == 'e')
    continue;
else
    putchar(x);
}
putchar('\n');

return (0);
}
