#include "main.h"
/**
 * read_textfile - function read txt file and print it to the POSIX std output
 * @filename: pointer.
 * @letters: num of printed letters.
 * Return: num of printed letters if success, 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rdNum, wrNum;
	char *ptr;
	int f_des = open(filename, O_RDONLY);

	if (filename == NULL || !letters)
	{
		return (0);
	}
	else if (f_des == -1)
	{
		return (0);
	}
	else
	{
		ptr = malloc(letters * sizeof(char));
		if (ptr == NULL)
		{
			free(ptr);
			return (0);
		}
		rdNum = read(f_des, ptr, letters);
		wrNum = write(STDOUT_FILENO, ptr, rdNum);
	}
	close(f_des);
	return (wrNum);
}
