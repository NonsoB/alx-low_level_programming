#include "main.h"
/**
 * print_alphabet- a function that prints the alphabets
 * "a" - "z" in small letters
 * _putchar- a function that displayd output to the screen
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

