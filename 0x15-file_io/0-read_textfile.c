#include "main.h"

/**
  * read_textfile - reads a text file and prints it to
  * the POSIX standart output
  * @filename: name of file
  * @letters: number of letters
  * Return: actual number of letters it could read and print
  * if the file can not be opened or read, return 0
  * if filename is NULL return 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int num_bytes;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc((letters) * sizeof(char));
	if (buffer == NULL)
		return (0);

	buffer[letters] = '\0';

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, num_bytes);

	close(fd);
	free(buffer);
	return (num_bytes);
}
