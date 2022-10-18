#include "main.h"

/**
 * _islower - checks if the char lowercased or not
 * @c: the value passed from outside the function
 * Return: if c is lowercas retrunt 1 else return 0
*/
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
