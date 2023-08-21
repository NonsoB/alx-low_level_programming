#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps variables
 * @a: a variable name
 * @b: a vsriable name
 * Return: Always 0.
 */
void swap_int(int *, int *)
{
	int a;
	int b;

	a = 98;
	b = 42;
	*a = b;
	*b = a;
}
