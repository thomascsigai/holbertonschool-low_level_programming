#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: the string to appends to
 * @src: the string to appends
 * @n: use at most n bytes from src
 *
 * Return: the pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen, j = 0;

	destLen = strlen(dest);
	while (src[j] && j < n)
	{
		dest[destLen + j] = src[j];
		j++;
	}
	dest[destLen + j] = '\0';

	return (dest);
}
