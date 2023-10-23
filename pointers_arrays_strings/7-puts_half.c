#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, strSize = 0;

	while (str[strSize] != '\0')
		strSize++;

	i = (strSize % 2 == 0) ? strSize / 2 : strSize / 2 + 1;
	for (; i < strSize; i++)
		_putchar(str[i]);
	_putchar('\n');
}
