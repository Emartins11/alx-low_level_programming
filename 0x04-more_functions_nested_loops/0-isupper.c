#include<stdio.h>
#include "main.h"

/**
* _isupper - check if a character is an alphabet
* @c: the character to be checked
* Return: 1 if lower and 0 if not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
