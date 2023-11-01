/**
 * _sqrt_recursion2 - returns the natural square root of
 * a number using an index
 * @n: the number
 * @i: the index
 *
 * Return: the square root of a number, -1 of there's an error
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i < n)
		return (_sqrt_recursion2(n, i + 1));

	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 0));
}
