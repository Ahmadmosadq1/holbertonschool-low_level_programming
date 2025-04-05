#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
 *.
 * Return: void.
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
