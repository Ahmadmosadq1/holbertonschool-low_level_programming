#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - Entry point
 *
 * Description :create a file with text filled by user
 *@filename: the file to be created.
 *@text_content: the text
 * Return: 1 (success).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	int w_fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
