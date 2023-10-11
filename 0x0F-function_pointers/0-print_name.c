#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints the name
 * @name: Ptr to the name to be printed
 * @f: ptr to the function that prints the name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
