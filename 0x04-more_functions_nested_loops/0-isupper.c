#include "main.h"

/**
 *main - checks for a uppercase letter
 *@c is the argument for the _isupper function
 *
 *Return: 1 (success) 
 */
int _isupper(int c)
{
	/* check if the argumenr is upper */
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
