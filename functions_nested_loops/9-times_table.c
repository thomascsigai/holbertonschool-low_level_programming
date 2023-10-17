#include "main.h"

/**
 * times_table - Print the 9 times tables
 *
 * Return : void
 */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			num = i * j;

			_putchar(',');
			_putchar(' ');
			if (num >= 10)
				_putchar(num / 10 + 48);
			else
				_putchar(' ');
			_putchar(num % 10 + 48);
		}
		_putchar('\n');
	}
}
