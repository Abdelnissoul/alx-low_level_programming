#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - main program to compile
 * @ac: arg count
 * @av: arg vector
 * Return: 1 (Success); 0 (Fail)
 */
int main(int ac, char **av)
{
	ssize_t x;
	int from_file;
	int into_file;
	char buf[READ_BUF_SIZE];

	from_file = 0;
	into_file = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	from_file =  open(av[1], O_RDONLY);

	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);
	}
	into_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (into_file == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]);
		exit(99);
	}
	while ((x = read(from_file, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(into_file, buf, x) != x)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);
	}

	from_file = close(from_file);
	into_file = close(into_file);

	if (from_file)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file);
		exit(100);
	}
	if (into_file)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
