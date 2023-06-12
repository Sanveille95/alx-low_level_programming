#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of file to read and print
  * @text_content: file content
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		int towrite, i;

		for (i = 0; text_content[i] != '\0'; i++)
			;

		towrite = write(fp, text_content, i);

		if (towrite == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
