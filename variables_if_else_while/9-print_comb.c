#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	putchar('0');
	for (i = 0; i < 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(49 + i);
	}
	return (0);
}
