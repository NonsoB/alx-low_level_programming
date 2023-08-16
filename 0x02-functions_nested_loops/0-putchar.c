#include "main.h"
#include <stdio.h>
/**
 * main- This program is supposed to print putchar and a
 * new line. I'm just gonna attempt it to see how much I've
 * learnt so far. finers crossed.
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
