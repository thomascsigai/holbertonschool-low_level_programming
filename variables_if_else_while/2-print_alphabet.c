#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
