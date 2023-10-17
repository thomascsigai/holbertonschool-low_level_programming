#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @n: the number to get the last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n *= -1;
	lastDigit = n % 10;
	_putchar(lastDigit + 48);
	return (lastDigit);
}
