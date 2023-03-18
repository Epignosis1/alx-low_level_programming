#include <stdio.h>
#include <stdlib.h>
/**
 *  main - returns alphabets in lower and upper case
 *
 *  Returns: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
