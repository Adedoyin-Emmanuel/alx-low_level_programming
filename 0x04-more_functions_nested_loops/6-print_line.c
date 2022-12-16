#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;
	
	/* check if n is 0 or less*/
	if (n <= 0)
	{
		_putchar('\n');
	}else{

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
