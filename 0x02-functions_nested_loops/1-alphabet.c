#include "main.h"

/**
 *main - prints all the letters of the alphabet
 *
 *Return: Always (0) Success
 */

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
