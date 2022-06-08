#include<stdio.h>
#include "main.h"

/**
* _islower - check if a letter is lower case
* @c: the letter to be checked
* Return: 1 if lower and 0 if not
*/

int _islower(int c)
{
if  (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
