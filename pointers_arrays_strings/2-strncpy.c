#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: the string to copy to
 * @src: the string to copy
 * @n: use at most n bytes from src
 *
 * Return: the pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destLen, i;

	destLen = strlen(dest);
	for (i = 0; i < destLen; i++)
	{
		if (i > n - 1)
			break;
		else if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
