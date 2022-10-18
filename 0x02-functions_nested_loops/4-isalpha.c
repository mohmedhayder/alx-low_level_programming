#include "main.h"

/**
 * _isalpha - check if char is alphabet or not
 * @c: the value passed from outside function
 * Return: returns 1 if c is a letter, else returns 0
*/
int _isalpha(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
