#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  * main - prints its own opcodes
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
	int i;

	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;

		if (i < atoi(argv[1]))
			putchar (' ');
	}
	putchar('\n');

	return (0);
}
