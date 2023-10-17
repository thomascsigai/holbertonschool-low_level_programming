#include "main.h"

/**
 * _abs - Computes the absolute value of an int
 * @n: the int to compute
 *
 * Return: n, the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
