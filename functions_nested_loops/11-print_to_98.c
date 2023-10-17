#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from an int to 98
 * @n: the first printed number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 97; i++)
			printf("%d, ", i);
	if (n > 98)
		for (i = n; i >= 99; i--)
			printf("%d, ", i);
	printf("98\n");
}
