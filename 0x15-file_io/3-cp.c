#include "main.h"
/**
 * main - entry point.
 * @argc: argument counter.
 * @argv: arg pointer.
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	char buffer_size[1024];
	ssize_t charNum, wRite;
	int source, dest, Err;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	charNum = 1024;
	while (charNum == 1024)
	{
		charNum = read(source, buffer_size, 1024);
		if (charNum == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
		}
		wRite = write(dest, buffer_size, charNum);
		if (wRite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	Err = close(source);
	if (Err == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", source);
		exit (100);
	}
	Err = close(dest);
	if (Err == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", dest);
		exit (100);
	}
	return (0);
}
