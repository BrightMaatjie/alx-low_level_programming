#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character x to stdout
 * @x: the character to print
 *
 * Return: on success
 * on error, -1 is retuned, and errno is set appropriately.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
