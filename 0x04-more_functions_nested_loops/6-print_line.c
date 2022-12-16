#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * using _
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int i;
	
	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
