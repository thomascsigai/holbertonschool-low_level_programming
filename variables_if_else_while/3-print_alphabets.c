#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a random number
 *
 * Return: 1
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar(97 + i);
	for (i = 0; i < 26; i++)
		putchar(65 + i);
	putchar('\n');
	return (0);
}
