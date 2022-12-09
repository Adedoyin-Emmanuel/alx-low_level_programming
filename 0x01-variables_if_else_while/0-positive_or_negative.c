#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main - This prints a number and prints if it is negative, positive or zero
 *
 * Return: Always 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 0)
	{
	   printf(n,"\n");
	   printf("is positive\n");
	}else if(n == 0){
	   printf(n,"\n");
	   printf("is zero\n");	   

	}else{
	   printf(n,"\n");
	   printf("is negative\n");
	}
	return (0);
}
