#include "main.h"
#include <stdio.h>

/**
 * keygen - a function that generates a random valid password
 */

int keygen(int password)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
