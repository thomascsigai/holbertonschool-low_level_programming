#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the char ascii value to be checked
 *
 * Return: 1 if the char is alphabetic. 0 otherwise
 */
int _isalpha(int c)
{
	int isLower = 0;

	if (c >= 97 && c <= 122)
		isLower = 1;
	if (c >= 65 && c <= 90)
		isLower = 1;

	return (isLower);
}
