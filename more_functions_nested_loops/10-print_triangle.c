#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, space, tag;

	for (i = 0; i < size; i++)
	{
		for (space = 0; space < size - i - 1; space++)
			_putchar(' ');
		for (tag = 0; tag < i + 1; tag++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
