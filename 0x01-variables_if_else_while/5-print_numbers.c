#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return : return 0
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
