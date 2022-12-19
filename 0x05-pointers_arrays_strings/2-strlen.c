#include "main.h"

/**
 *_streln - returns the length of a string
 *@s: is the parameter
 *
 *Return: the string length
 */

size_t _strlen(char *s)
{
	size_t length = 0;
	
	while (*s++)
		length++;

	return (length);
}
