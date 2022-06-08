#include<stdio.h>
#include "main.h"

/**
* _islower - prints 1 if lower and 0 if not
*/

int _islower(int c)
{
if  (c >= 'a' && c <= 'z')
_putchar('1');
else
_putchar('0');
return 0;
}
