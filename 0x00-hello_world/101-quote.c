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
{int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", s);

	return (1);
}
