#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	printf("%c", alp[i]);
	}
	printf("\n");
	return (0);
}
