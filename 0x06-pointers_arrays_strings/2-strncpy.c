#include "main"
/**
 * _strncpy - A function that copies a string
 *
 *@dest: pointer to destination input buffer
 *@src: pointer to source input buffer
 *@n bytes of @src
 *
 *Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * iterate through src array
	 * where it there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be 
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src [i];
	/**
	 *it the length of source is less than n
	 *write additiona nullbytes to dest to 
	 *insur that a total of n bytes is written
	 */
	while (i<n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
