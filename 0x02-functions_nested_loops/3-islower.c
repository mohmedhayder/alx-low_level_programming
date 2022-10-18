#include "main.h"

/**
 * _islower - checks if the char lowercased or not
 * @c: the value passed from outside the function
 * Return: if c is lowercas retrunt 1 else return 0
*/
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
