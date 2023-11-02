#include "main.h"
/**
*append_text_to_file - appends text at the end of a file
*@filename: name of the file
*@text_content: null terminated string
*Return: either 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bw;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bw = write(fd, text_content, strlen(text_content));
	if (bw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
