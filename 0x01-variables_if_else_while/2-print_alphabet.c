#include<stdio.h>

/**
* main - Entry
*
* Return: Always 0
*/

int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
    putchar(tolower(x));

return (0);
}