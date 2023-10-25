/**
 * leet - encodes a string to 1337
 * @s: the string to encode
 *
 * Return: the string encoded
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
				s[i] = numbers[j];
		i++;
	}

	return (s);
}
