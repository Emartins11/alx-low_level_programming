#include<stdio.h>

/**
* main - Entry
*
* Return: Always 0
*/

int main(void)
{
int x;
int lower_x;
for (x = 'A'; x <= 'Z'; x++)
{
    lower_x = tolower(x);
    putchar(lower_x);
}

return (0);
}