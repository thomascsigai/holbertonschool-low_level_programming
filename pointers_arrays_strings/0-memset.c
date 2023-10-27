/**
 * _memset - fills memory with a constant byte
 * @s: the area to fill
 * @b: the constant byte to be set
 * @n: the number of bytes to set
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}
