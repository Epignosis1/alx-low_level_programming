#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * main- adds consecutive integers
 * @argc:  counts of strings
 * @argv: holds strings
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	int i;
	int add;
	int j;
	int num;

	add = 0;
	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		add = add + num;
	}
	printf("%d\n", add);
	return (0);
}
