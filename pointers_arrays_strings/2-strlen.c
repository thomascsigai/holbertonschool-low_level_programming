/**
 * _strlen - returns the length of a string
 * @s: the string which the length will be returned
 *
 * Return: strlen - the length of s
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
