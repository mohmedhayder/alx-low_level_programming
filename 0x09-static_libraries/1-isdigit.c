#include "main.h"
/**
 * _isdigit - checks if c is a digit or not
 * @c: variable passed to the funtion
 * Return: Returns 1 if c is a digit
 * returns 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
