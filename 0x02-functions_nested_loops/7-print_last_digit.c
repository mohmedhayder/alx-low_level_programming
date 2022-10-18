#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number passed from outide the function
 * Return: returns the last digit of a number
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
