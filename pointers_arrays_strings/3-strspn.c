/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the bytes of the prefix
 *
 * Return: the number of bytes int he intiial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	unsigned int isInAccept = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				isInAccept = 1;
			j++;
		}
		if (!isInAccept)
			break;
		j = 0;
		isInAccept = 0;
		i++;
	}

	return (i);
}
