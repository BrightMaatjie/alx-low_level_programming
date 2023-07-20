#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: on success
 * on error, -1 is retuned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
