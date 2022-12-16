#include "main.h"

/**
 * more__numbers - Prints the numbers from 0-14 ten times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j /10) + '0');
		}
		_putchar(j + '0');
	}
	_putchar('\n');
}
