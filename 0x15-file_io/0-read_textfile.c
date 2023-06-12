#include "main.h"

/**
  * read_textfile - reads a text file and prints
  * it to the POSIX standard output
  * @filename: name of the file to open
  * @letters: number of letters to read and print
  * Return: number of letters to read and print. 0, if it fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t toread, towrite;
	char *buffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	toread = read(fp, buffer, letters);
	towrite = write(STDOUT_FILENO, buffer, toread);

	close(fp);

	free(buffer);

	return (towrite);
}
