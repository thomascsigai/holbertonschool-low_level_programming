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
	int startOfIntChain = 0;

	while (s[i])
	{
		if (s[i] == 45)
			retValueSign *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			startOfIntChain = i;
			break;
		}
		i++;
	}

	while (s[startOfIntChain] > 47 && s[startOfIntChain] < 58)
	{
		retValue *= 10;
		if (retValue == 2147483640 && s[startOfIntChain] >= 56)
			return (-2147483647 - 1);
		retValue += s[startOfIntChain] - 48;
		startOfIntChain++;
	}

	return (retValue * retValueSign);
}
