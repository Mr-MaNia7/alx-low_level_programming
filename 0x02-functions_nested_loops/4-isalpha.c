/**
 * _islpha - checks alphabets
 * @c: the character to be checked
 * Return: 1 if c is alphabet, or 0 other wise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 97 + 26))
		return (1);
	else
		return (0);
}
