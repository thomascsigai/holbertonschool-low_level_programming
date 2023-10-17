#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if the num is pisitive. -1 if it's negative. 0 Otherwise
 */
int print_sign(int n)
{
	int nSign = 0;
	char cSign = '0';

	if (n != 0)
	{
		if (n > 0)
		{
			cSign = '+';
			nSign = 1;
		}
		else
		{
			cSign = '-';
			nSign = -1;
		}
	}
	_putchar(cSign);
	return (nSign);
}
