#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return 0;

    char *buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(file_descriptor);
        return 0;
    }

    ssize_t num_read_bytes = read(file_descriptor, buffer, letters);
    if (num_read_bytes == -1)
    {
        close(file_descriptor);
        free(buffer);
        return 0;
    }

    ssize_t num_write_bytes = write(STDOUT_FILENO, buffer, num_read_bytes);
    if (num_write_bytes == -1 || (size_t)num_write_bytes != (size_t)num_read_bytes)
    {
        close(file_descriptor);
        free(buffer);
        return 0;
    }

    close(file_descriptor);
    free(buffer);

    return num_read_bytes;
}
