#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text: the text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text)
{
	if (filename == NULL)
		return -1;

	int fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return -1;

	int bytes_written = 0;
	if (text != NULL)
	{
		while (text[bytes_written])
			bytes_written++;

		bytes_written = write(fd, text, bytes_written);
		if (bytes_written == -1)
		{
			close(fd);
			return -1;
		}
	}

	close(fd);
	return 1;
}
