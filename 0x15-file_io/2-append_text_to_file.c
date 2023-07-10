#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of file
  * @text_content: file content
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, towrite;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
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
