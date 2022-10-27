#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Retrun: Always 0.
*/

int main(void)
{
	char str[] = "Except the best. Prepare for the worstm. Capitalize on what comes. \nhello world! hello-world! 0123456he11o world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
