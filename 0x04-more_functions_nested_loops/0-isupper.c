/**
 * _isupper - check the code.
 * @c: Ascii code of the caracter we want to see if it is upper or lower.
 * Return: 1 if it is upper case and 0 if it is not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
