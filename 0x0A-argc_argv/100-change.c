#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Argument counter.
 * @argv: String that holds the argument.
 * Return: Return 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, num, coin = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cent[i])
		{
			num -= cent[i];
			coin++;
		}
	}
	printf("%d\n", coin);
	return (0);

}
