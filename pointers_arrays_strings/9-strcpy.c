#include <stdio.h>

/**
 * _strcpy - Copies a string to a buffer
 * @dest: the buffer
 * @src: the string to copy
 *
 * Return: the pointer to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *pDest = dest;

	while (src[i])
	{
		pDest[i] = src[i];
		i++;
	}
	pDest[i] = '\0';

	return (pDest);
}
