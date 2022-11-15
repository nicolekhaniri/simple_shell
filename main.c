#include <stdio.h>

int main(void)
{
	char *command;
	printf("\nShell");
	while(true)
	{
		printf("\n($) ");
		scanf("%s", &command);
		printf("command: %s", &command);
		//	function to execute ./bin/{command}
	}
	printf("($) ");
	scanf("%s", &command);
	printf("command: %s", &command);
	return 0;
}