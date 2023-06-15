#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
	char *error_message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_length = strlen(error_message);
	ssize_t bytes_written;

	bytes_written = write(STDERR_FILENO, error_message, message_length);

	if (bytes_written != (ssize_t)message_length)
	{
		perror("write");
		return (1);
	}

	return (1);
}
