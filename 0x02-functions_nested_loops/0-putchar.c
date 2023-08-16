#include "main.h"
#include <unistd.h>
/**
 * _putchar - Custom implementation of the putchar function.
 * @c: The character to be printed.
 *This function writes a single character to the standard output.
 * Returns:
 * On success, the number of bytes written (1).
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point of the program.
 * This function prints the word "_putchar" followed by a newline.
 * Return: 0 (success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
