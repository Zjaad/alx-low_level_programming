#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1.
 * On failure or if filename is NULL - -1.
 *  If the file does not exist or the user lacks write permissions - -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[ln])
			ln++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, ln);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
