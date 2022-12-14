#include "main.h"

/**
 *main - prints all the letters of the alphabet
 *
 *Return: Always (0) Success
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
