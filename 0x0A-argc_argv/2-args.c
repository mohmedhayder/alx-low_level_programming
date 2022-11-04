#include <stdio.h>
/**
 * main - prints the program name
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
