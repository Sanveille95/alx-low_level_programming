#include "main.h"

/**
 * error_file - checks if files can be opened
 * @file_from: file from
 * @file_to: file to
 * @argv: arguments vector
 * Return: no return
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error;
	int towrite, toread;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	toread = 1024;
	while (toread == 1024)
	{
		toread = read(file_from, buffer, 1024);
		if (toread == -1)
			error_file(-1, 0, argv);

		towrite = write(file_to, buffer, toread);
		if (towrite == -1)
			error_file(0, -1, argv);
	}

	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", file_from);
		exit(100);
	}

	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", file_to);
		exit(100);
	}
	return (0);
}
