#include<stdio.h>
/**
 * main- prints all arguement that it receives
 * @argc: counts of arguement entered in the command line
 * @argv: array that holds the string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

