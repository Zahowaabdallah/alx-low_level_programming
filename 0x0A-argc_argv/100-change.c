#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int car = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	car = atoi(argv[1]);
	while (car >= 25)
	{
		car -= 25;
		money++;
	}
	while (car >= 10)
	{
		car -= 10;
		money++;
	}
	while (car >= 5)
	{
		car -= 5;
		money++;
	}
	while (car >= 2)
	{
		car -= 2;
		money++;
	}
	if (car == 1)
		money++;
	printf("%d\n", money);
	return (0);
}
