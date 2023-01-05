#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: the parameter to be printed
 */

void _puts_recursion(char *s)
{	
	/*Create the base case */
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
