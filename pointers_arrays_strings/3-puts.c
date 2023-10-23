#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int strIndex = 0;

	while (str[strIndex] != '\0')
	{
		_putchar(str[strIndex]);
		strIndex++;
	}
	_putchar('\n');
}
