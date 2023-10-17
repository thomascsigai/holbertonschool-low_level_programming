#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the value of the last digit
 * @n: the number to get the last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + 48);
	return (lastDigit);
}
