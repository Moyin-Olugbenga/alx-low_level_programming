#include <stdio.h>
/**
 * main - print all letters except q and e
 *
 * Return: always 0
*/
int main(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		if (cc != 'q' && cc != 'e')
			putchar(cc);
	}
	putchar('\n');
	return (0);
}
