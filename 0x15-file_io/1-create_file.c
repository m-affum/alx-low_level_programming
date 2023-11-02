#include "main.h"
/**
*create_file - this function creates a file
*@filename: name of the file to be created
*@text_content: content of the file
*Return: returns either -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int cf;

	if (filename == NULL)
	{
		return (-1);
	}
	cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (cf == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(cf, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(cf);
			return (-1);
		}
	}
	close(cf);
	return (1);
}
