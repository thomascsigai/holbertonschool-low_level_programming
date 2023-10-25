#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the string to appends to
 * @src: the string to appends
 *
 * Return: the pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int destLen, j = 0;

	destLen = strlen(dest);
	while (src[j])
	{
		dest[destLen + j] = src[j];
		j++;
	}
	dest[destLen + j] = '\0';

	return (dest);
}
