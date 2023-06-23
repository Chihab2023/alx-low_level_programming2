#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or Returns 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper;

	for (isupper = 0; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
