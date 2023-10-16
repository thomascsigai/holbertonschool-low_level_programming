#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: 0
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
