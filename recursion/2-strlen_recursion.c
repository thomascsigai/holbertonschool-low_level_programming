/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
