#include "main.h"

/**
 * _isdigit - Checks for digit char
 * @c: the char ascii value to be checked
 *
 * Return: 1 if the char is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
