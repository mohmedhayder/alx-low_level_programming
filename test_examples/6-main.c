#include <stdio.h>

/**
 * main - derefencing pointers, example wiht int and char types
 * Returns: Always .
*/

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Value of 'n' : %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", &n);
	*p = 402;
	*pp = 'o';
	printf("Value of 'n': %d\n", n);
	printf("value of '*pp': %d\n", *pp);
	printf("value of 'c': %d ('%c')\n", c, c);
	printf("value of '*pp': %d ('%c')\n", *pp, *pp);

	return (0);
}
