#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - for it
 *
 * Return: nothing
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * the creation
 * display
 */
void create_process(void)
{
	int rc = fork();

	if (rc == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 * main - five things
 *
 * Return: nothing
 */
int main(void)
{
	create_process();
	create_process();
	create_process();
	create_process();
	create_process();
	return (infinite_while());
}
