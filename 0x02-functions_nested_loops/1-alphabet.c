#include<stdio.h>
#include "main.h"

/**
* main - Entry
*
* Return: Always 0
*/

void print_alphabet(void)
{
int x;
int y;
for (y = 0; y < 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}

}

int main(void)
{
print_alphabet();

return (0);
}
