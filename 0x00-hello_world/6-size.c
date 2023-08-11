#include <stdio.h>
/**
 * main - This program prints type
 * Return: 0
 */
int main(void)
{
	long int c;
	long long int d;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d))
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
