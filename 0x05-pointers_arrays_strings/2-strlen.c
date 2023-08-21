#include "main.h"
#include <stdio.h>

/**
 * _strlen - is a function that checks and returns the
 * length of a string
 * @s: string
 * return 0 (success)
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
