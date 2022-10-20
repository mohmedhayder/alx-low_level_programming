#include "main.h"
/**
 * _isdigit - checks if c is a digit or not
 * @c: variable passed to the funtion
 * Retuen: Returns 1 if c is a digit
 * returns 0 otherwise
*/
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	
	return (0);
}
