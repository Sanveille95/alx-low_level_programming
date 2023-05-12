#include "main.h"
#include <stdio.h>

/**
  * main - print the name of the program
  * @argc: count arguments
  * @argv: arguments
  * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
