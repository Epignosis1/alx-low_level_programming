#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - prints if a number is positive or negative
 *
 *  Return:  Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positve");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return (0);
}
