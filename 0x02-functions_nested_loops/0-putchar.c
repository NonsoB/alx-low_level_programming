#include "main.h"
#include <unistd.h>
/**
 * main- This program is supposed to print putchar and a
 * new line. I'm just gonna attempt it to see how much I've
 * learnt so far. fingers crossed.
 * c = character
 * _putchar = prints out the character to standard output
 * Return : 1
 */
int main(void)
{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');

return (0);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
