/**
 * swap_int - Swaps the value of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
