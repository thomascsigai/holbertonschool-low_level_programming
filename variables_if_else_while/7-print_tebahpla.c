#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the reversed alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
