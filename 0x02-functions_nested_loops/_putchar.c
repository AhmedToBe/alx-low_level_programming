#include <unistd.h>
#include "main"

/**
 *  _putchar - Writes the character c to stdout
 *  
 *  &c: The character to print
 *
 * Return: On success 1.
 * 	on error , -1 is returned, and errno is set appropriatly 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
