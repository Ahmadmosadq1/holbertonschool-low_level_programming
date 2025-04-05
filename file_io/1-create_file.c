#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - Entry point
 *
 * Description :create a file with text filled by user
 *@filename: the file to be created.
 *@text_content: the text
 * Return: 1 (success).
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w_fd;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	w_fd = write(fd, text_content, i);
	if (w_fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
