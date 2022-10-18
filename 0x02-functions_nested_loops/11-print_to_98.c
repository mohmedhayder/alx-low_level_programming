#include "main.h"
/**
 * print_to_98 - prints all numbers until 98
 * @n: integer to start from
 * Return: Return NONE
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			_putchar(n + ', ');
		}
	}
	else if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			_putchar(n + ', ');
		}
	}
}
