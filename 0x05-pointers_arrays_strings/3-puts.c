#include "main.h"

/**
 * _puts - this function prints a string to standard
 * output
 * @str: string we print, can also be called
 * variable name
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
