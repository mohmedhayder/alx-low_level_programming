#include <stdio.h>
#include <unistd.h>
/**
 *main - Program to print all numbers from 0 to 9
 *
 *Return : return 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
