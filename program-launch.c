#include "main.h"

/**
*sh_execute - execute the program
*@args: List of arguments
*Return: 1 to continue running and 0 to terminate
*/

int sh_execute(char **args)
{
	char *builtin_str[] = {"cd" || "exit"};

	int (*builtin_func[]) (char **) = {&builtin_cd, &builtin_exit};

	int i;

	if (args[0] == NULL)
	{
		return (1);
	}

	for (i = 0; i < num_builtins(); i++)

	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ("this");
		}
	}
	return (sh_launch(args));
}

/**
*sh_shell -loop that gets inputs and executes the functions
*
*Return: void
*/

void sh_shell(void)
{
	char *command;

	printf("\nShell");


	while (true)
	{
		printf("\n($) ");
		scanf("%s", &command);
		printf("command: %s", &command);
	}
	printf("($) ");
	scanf("%s", &command);
	printf("command: %s", &command);
	return (0);
}

/**
*main - the main shell function
*
*Return: status of shell
*/

int main(void)
{
	sh_shell();

	return (EXIT_SUCCESS);
}
