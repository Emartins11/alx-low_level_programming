#include<stdio.h>
#include "main.h"

/**
* _isdigit - check if a character is an alphabet
* @c: the character to be checked
* Return: 1 if lower and 0 if not
*/

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}

}
