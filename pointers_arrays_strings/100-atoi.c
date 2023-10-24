/**
 * _atoi - converts a string to a interger
 * @s: the string to convert
 *
 * Return: the int resulted from the operation
 */
int _atoi(char *s)
{
	int i = 0;
	int retValue = 0;
	int retValueSign = 1;
	int startOfInt = 0;

	while (s[i])
	{
		if (s[i] == 45)
			retValueSign *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			startOfInt = i;
			break;
		}
		i++;
	}

	while (s[startOfInt] > 47 && s[startOfInt] < 58)
	{
		retValue *= 10;
		retValue += s[startOfInt] - 48;
		startOfInt++;
	}

	return (retValue * retValueSign);
}
