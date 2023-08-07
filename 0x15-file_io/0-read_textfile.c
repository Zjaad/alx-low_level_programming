#include "main.h"
#include <stdlib.h>

/**
 * readme_textfile - read the text file and Print to STDOUT.
 * @filename: Name of the text to Read.
 * @letters: number of letters tobe Read.
 *
 * Return: number of bytes Readed and printed, or 0 one fail or in null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_descriptor, bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(file_descriptor);

	if (bytes_read != bytes_written)
		return (0);
	return (bytes_written);
}
