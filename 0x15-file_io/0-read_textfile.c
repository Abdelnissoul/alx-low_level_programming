#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: the name of the file to be read
 * @letters: number of letters in the file
 * Return: the number of letters (S), 0 (F)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char buf[READ_BUF_SIZE * 8];
	ssize_t by;

	if (!filename || !letters)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}
	 by = read(file, &buf[0], letters);
	 by = write(STDOUT_FILENO, &buf[0], by);

	close(file);
	return (by);
}
