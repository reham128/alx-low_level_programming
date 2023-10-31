#include "main.h"
/**
 * create_file - func to creat file.
 * @filename: file name.
 * @text_content: string to write.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_des, wRite, strL;

	if (filename == NULL)
	{
		return (-1);
	}
	else if (text_content != NULL)
	{
		for (strL = 0; text_content[strL]; strL++)
			;
	}
	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f_des == -1)
	{
		return (-1);
	}
	wRite = write(f_des, text_content, strL);
	if (wRite == -1)
	{
		return (-1);
	}
	close(f_des);
	return (1);
}
