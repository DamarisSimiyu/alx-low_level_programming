#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful"
 *              followed by the author and date to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(message);

	if (write(STDERR_FILENO, message, length) != (ssize_t)length)
	{
		perror("write");
		exit(1);
	}

	return (1);
}

