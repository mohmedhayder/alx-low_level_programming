#include "main.h"
/**
 * _isupper - Checks if the character in uppercase.
 * @c: charchter to be checked
 * Return: returns 1 if the charcter is upper case
 * returns 0 otherwise
*/
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
