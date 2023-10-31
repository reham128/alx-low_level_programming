#include "main.h"
/**
 * append_text_to_file - to append txt at end of file.
 * @filename: file name.
 * @text_content: string to append.
 * Return: 1 for success, -1 for fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_des, strL;
	ssize_t wRite;

	if (!filename)
	{
		return (-1);
	}
	f_des = open(filename, O_WRONLY | O_APPEND);
	if (f_des == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (strL = 0; text_content[strL]; strL++)
			;
		wRite = write(f_des, text_content, strL);
	}
	if (wRite == -1)
	{
		return (-1);
	}
	close(f_des);
	return (1);
}
