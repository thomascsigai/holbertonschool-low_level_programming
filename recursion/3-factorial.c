/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: n!, -1 if there's an error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));

	return (-1);
}
