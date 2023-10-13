#include <stdio.h>

/**
 * main - Prints to the stderr the specified msg
 *
 * Return: 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, sizeof(s) - 1, 1, stderr);
	return (1);
}
