#include "main.h"

/**
 * print_rev - Prints a string in reverse followed w/ new line
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, sSize = 0;

	while (s[sSize] != '\0')
		sSize++;

	for (i = sSize - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
