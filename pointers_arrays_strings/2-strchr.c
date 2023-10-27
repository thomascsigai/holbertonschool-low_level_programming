/**
 * _strchr - locates a char in a string
 * @s: the string to check
 * @c: the char to locate
 *
 * Return: a pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s + i);
}
