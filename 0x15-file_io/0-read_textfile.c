#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to name of file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed; or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    ssize_t read_bytes, write_bytes;
    char *buffer;
    buffer = malloc(sizeof(char) * letters);
    read_bytes = read(file, buffer, letters);
    write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

    if (filename == NULL)
        return 0;

    file = open(filename, O_RDONLY);
    if (file == -1)
        return 0;


    if (buffer == NULL)
    {
        close(file);
        return 0;
    }


    if (read_bytes == -1)
    {
        close(file);
        free(buffer);
        return 0;
    }

    if (write_bytes == -1 || (size_t)write_bytes != (size_t)read_bytes)
    {
        close(file);
        free(buffer);
        return 0;
    }

    close(file);
    free(buffer);

    return read_bytes;
}
