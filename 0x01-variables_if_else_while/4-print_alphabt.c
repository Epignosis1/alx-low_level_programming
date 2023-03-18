#include <stdio.h>
/**
 * main - entry pointt
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	if ((c == 'q' || c == 'e') != 1)
	{
	putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
