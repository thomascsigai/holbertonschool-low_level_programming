#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int strIndex = 0;

	while (str[strIndex] != '\0')
	{
		_putchar(str[strIndex]);
		strIndex += 2;
	}
	_putchar('\n');
}
