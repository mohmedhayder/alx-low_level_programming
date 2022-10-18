#include "main.h"
/**
 * _abs - function that computes the absolute value of an intger
 * @n: the number coming from outside the function
 * Return: returns the abs value of the intger
*/
int _abs(int n)
{
	int res;

	if (n >= 0)
	{
		res = n;
		return (res);
	}
	else if (n < 0)
	{
		res = n * -1;
		return (res);
	}
}
