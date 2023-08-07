#include "main.h"
/**
 * create_file - Creates file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: if it failed - -1 .
 * otherwise - 1 .
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[ln])
			ln++;
	}

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text_content, ln);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
