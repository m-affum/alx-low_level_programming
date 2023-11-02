#include "main.h"
/**
*read_textfile -reads a text file and prints it to the POSIX stdout
*@filename: pointer to the filename
*@letters: number of letters to read
*Return: return number of letter or 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int fd, bytes_read, bytes_written = 0;

	if (filename == NULL || buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
