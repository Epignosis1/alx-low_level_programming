#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * print_rev- prints the reverse of a string
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int len, i;
	char c;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
	printf("%s", s);
}
