#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 
 * except from 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		else 
			_putchar(num + '0');
	}
	_putchar('\n');
}
