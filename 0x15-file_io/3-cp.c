#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: file name
 * Return: A pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fp: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int count;

	count = close(fd);

	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents from file to another
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, toread, towrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	toread = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || toread == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		towrite = write(file_to, buffer, toread);
		if (file_to == -1 || towrite == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		toread = read(file_from, buffer, 1024);

	} while (toread > 0);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
