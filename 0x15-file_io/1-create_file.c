#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file_descriptor, content_length = 0, bytes_written;

    if (!filename)
        return (-1);

    if (text_content)
    {
        while (text_content[content_length])
            content_length++;
    }

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (file_descriptor == -1)
        return (-1);

    if (text_content)
    {
        bytes_written = write(file_descriptor, text_content, content_length);
        if (bytes_written == -1 || bytes_written != content_length)
        {
            close(file_descriptor);
            return (-1);
        }
    }

    close(file_descriptor);
    return (1);
}