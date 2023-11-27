#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 (file exists); -1 (fail | file does not exist)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int total_w;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		letters = 0;
		while (text_content[letters] != '\0')
			letters = letters + 1;

		total_w = write(file, text_content, letters);

		if (total_w == -1)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
