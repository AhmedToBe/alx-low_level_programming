#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "a,b,c,d,e,f,g,h,i,j,c,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	int i:

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putcahr('\n');
	return (0);
}
