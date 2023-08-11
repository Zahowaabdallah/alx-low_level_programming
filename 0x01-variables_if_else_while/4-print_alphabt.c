#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int loweCase = 'a';
while (loweCase <= 'z')
{
if (loweCase == 'e' || loweCase == 'q')
{
loweCase += 1;
}
else
{
putchar(loweCase);
loweCase += 1;
}
}
putchar('\n');
return (0);
}
