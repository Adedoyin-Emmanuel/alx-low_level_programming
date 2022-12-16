#include "main.h"

/**
 * more__numbers - Prints the numbers from 0-14
 * prints numbers 10 times folowed by a new line
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
