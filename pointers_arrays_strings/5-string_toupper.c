/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @s: the string
 *
 * Return: the pointer to the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
		i++;
	}

	return (s);
}
