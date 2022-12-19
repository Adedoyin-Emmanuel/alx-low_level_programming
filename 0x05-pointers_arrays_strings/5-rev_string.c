#include "main.h"

/**
 *rev_string - a function that reverses a string
 *@s: the parameter for the function
 */

void rev_string(char *s)
{
	int i, result;
	

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i -1; i >= 0; i--)
	{
		result += s[i];
	}
	*s = result;
}
