#include "main.h"

/**
 * read_textfile - Reads a text file and prints it in POSIX standard output
 * @filename: File pointer
 * @letters: Number of letters it should read and print
 *
 * Return: The number of letters it read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t byteread, bytewritten;

	if (!filename)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);

	byteread = read(fp, buff, letters);
	if (byteread == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}

	bytewritten = write(STDOUT_FILENO, buff, byteread);
	if (bytewritten == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	close(fp);
	return (byteread);
}
