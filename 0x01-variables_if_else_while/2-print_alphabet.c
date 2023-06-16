#include<unistd.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
