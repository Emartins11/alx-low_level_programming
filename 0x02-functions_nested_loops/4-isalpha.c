#include<stdio.h>
#include "main.h"

/**
* _isalpha - check if a character is an alphabet
* @c: the character to be checked
* Return: 1 if lower and 0 if not
*/

int _isalpha(int c)
{
if  (c >= 'A' && c <= 'z')
return (1);
else
return (0);

}
