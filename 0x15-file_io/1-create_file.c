#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: File to be created
 * @text_content: String to write to the file
 *
 * Return: Retuns 1 (success), on failure (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int count = 0, res = 1;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[count])
			count++;
		res = write(fp, text_content, count);
	}
	if (res == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
