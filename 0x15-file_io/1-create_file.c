#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the content of the text in the file
 * Return: 1 (Success); -1 (FAIL)
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int total_w;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	letters = 0;
	while (text_content[letters] != '\0')
		letters = letters + 1;

	total_w = write(file, text_content, letters);

	if (total_w == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
