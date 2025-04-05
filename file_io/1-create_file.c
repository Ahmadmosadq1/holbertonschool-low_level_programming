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
	char buffer[2024];
	char *reader;
	int i = 0;
	int j = 0;
	
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	reader = read(STDIN_FILENO, buffer, 2024);
	if (reader = -1)
		return (-1);
	while (i < reader)
		j++;
	text_content = malloc(sizeof(char) * (i + 1));
	if (text_content == NULL)
		return (-1);
	for (; i < j; i++)
		text_content[i] = buffer[i];
	text_contet[i] = '\0';
	w_fd = write(fd, text_content, j);
	if (w_fd == -1)
		return (-1);
	free(text_content);
	close(fd);
	return (1);
}



