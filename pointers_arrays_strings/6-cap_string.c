/**
 * isSeparatorOfWords - checks is a char is a separator
 * @c: the char to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int isSeparatorOfWords(char c)
{
	int isSeparator = 0, i;
	char separators[13] = {' ', '\n', '\t', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 10; i++)
		if (c == separators[i])
			isSeparator = 1;

	return (isSeparator);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: the string
 *
 * Return: the pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0, capitalizeChar = 1;

	while (s[i])
	{
		if (capitalizeChar && s[i] > 96 && s[i] < 123)
			s[i] -= 32;
		capitalizeChar = isSeparatorOfWords(s[i]);
		i++;
	}

	return (s);
}
