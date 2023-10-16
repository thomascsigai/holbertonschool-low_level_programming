#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without 'e' and 'q'
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (97 + i != 113 && 97 + i != 101)
			putchar(97 + i);
	}
	putchar('\n');
	return (0);
}
