#include "main.h"

/**
 * _islower - Checks for lowercase char
 * @c: the char ascii value to be checked
 *
 * Return: 1 if the char is lowercase. 0 otherwise
 */
int _islower(int c)
{
	int isLower = 0;

	if (c >= 97 && c <= 122)
		isLower = 1;

	return (isLower);
}
