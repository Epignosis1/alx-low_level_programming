#include<stdlib.h>
#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name- print the name
 * @name: name to use
 * @f:pointrer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

