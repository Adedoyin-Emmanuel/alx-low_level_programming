#include "main.h"

/**
 *print_numbers - prints the numbers from 0 to 9
 *
 *Return: void
 */

void prints_numbers(void)
{
	int i;

	for (i =0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
