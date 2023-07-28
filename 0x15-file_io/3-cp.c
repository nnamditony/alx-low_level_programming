#include "main.h"

/**
 * creat_buf - Allocates 1024 bytes to a buffer
 * @file: File buffer stores char for
 * Return: Pointer to newly allocated buffer
 */
char *creat_buf(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * file_close - Closes file description
 * @fd: File descriptor to be closed
 */
void file_close(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies content of a file to another file
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int src, dest, _read, _write;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = creat_buf(argv[2]);
	src = open(argv[1], O_RDONLY);
	_read = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (_read > 0)
	{
		if (src == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		_write = write(dest, buff, _read);
		if (dest == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		_read = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	close(src);
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	close(dest);
	free(buff);
	return (0);
}
