#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the number passed from the outside function
 * Return: returns :
 * 1 if the number greater than 0
 * 0 if the number equals zero
 * -1 if the number samller than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
