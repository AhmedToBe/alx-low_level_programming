#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)

{
char alp[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; alp[i] != '\0'; i++)
	{
	printf("%c ", alp[i]);
	}
	printf("\n");
	return (0);
}
