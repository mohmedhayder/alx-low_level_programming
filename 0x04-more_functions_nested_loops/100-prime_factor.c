#include <stdio.h>

/**
 * main - calculate largest prime of 612852475143
 * 
 * Return: Always 0
*/

int main(void)
{
	long int number = 612852475143;
	long int prime;

	for (prime = 2; prime < number; prime++)
	{
		if (number % prime == 0)
		{
			number = number / prime;
		}
	}
	printf("%ld\n", prime);

	return (0);
}