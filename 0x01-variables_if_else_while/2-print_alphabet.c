#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijcklmnopqrstuvwxyz";
	int i:

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putcahr('\n');
	return (0);
}
