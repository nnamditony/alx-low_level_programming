#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that generates random valid passwords
 * for the program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	char pass_data[] =
		"abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"0123456789"
		"~@#$%^&*";

	srand(time(NULL));
	printf("Password : ");
	for (int i = 0; i < 10; i++)
		printf("%c", pass_data[rand() % sizeof(pass_data) - 1]);
	printf("\n");
	return (0);
}
