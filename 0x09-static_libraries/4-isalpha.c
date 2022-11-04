#include "main.h"

/**
 * _isalpha - check if char is alphabet or not
 * @c: the value passed from outside function
 * Return: returns 1 if c is a letter, else returns 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
