#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read;
	ssize_t total_chars = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	while ((bytes_read = fread(buffer, sizeof(char), letters, file)) > 0)
	{
		if (fwrite(buffer, sizeof(char), bytes_read, stdout) != bytes_read)
		{
			free(buffer);
			fclose(file);
			return (0);
		}
		total_chars += bytes_read;
	}

	free(buffer);
	fclose(file);
	return (total_chars);
}
