#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_COMMAND_LENGHT 100

/**
 * main - Entry point
 * Display a prompt and wait for the user to type a command
 * Return: Nothing cause it is void
 */
int main(void)
{
	char command[MAX_COMMAND_LENGHT];

	while (1)
	{
		printf(">");
		fflush(stdout);
	}

	if (fgets(command, MAX_COMMAND_LENGHT, stdin) != NULL)
	{
		command[strcspn(command, "\n")] = '\0';
		printf("You entered: %s\n", command);
	}
}
