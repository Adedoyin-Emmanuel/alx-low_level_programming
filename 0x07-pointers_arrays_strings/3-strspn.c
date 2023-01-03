#include "main.h"
#include <string.h>

/**
 *_strspn - get the length of a prefix substring
 *@s: the string segment
 *@accept: the bytes parameter from which the function returns 
 */

unsigned int _strspn(char *s, char *accept)
{
	int byte_number = strspn(s, accept);

	return (byte_number);
}
