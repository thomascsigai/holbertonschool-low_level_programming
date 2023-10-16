#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a random number
 *
 * Return: 1
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
		printf("and is greater than 5\n");
	if (lastDigit == 0)
		printf("and is 0\n");
	if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
