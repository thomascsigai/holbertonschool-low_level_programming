#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all single digit of base 16
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (i = 0; i < 6; i++)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
