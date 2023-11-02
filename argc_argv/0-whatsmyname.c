#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
