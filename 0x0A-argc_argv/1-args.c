#include <stdio.h>
/**
 * main - prints the program name
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
