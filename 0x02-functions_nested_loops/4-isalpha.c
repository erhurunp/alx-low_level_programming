include "main.h"

/**
 * _isalpha - checks for uppercase and
 * lowercase letters
 *
 * Return: 1 if character is either an
 * uppercase or lowercase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
