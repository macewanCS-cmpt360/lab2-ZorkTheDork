/*
 *The easiest way to make the parent wait for the child without
 *calling wait() is by calling sleep().
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int rc = fork();

	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
	} else if (rc == 0) {
		printf("Hello\n");
	} else {
		sleep(1);
		printf("Goodbye\n");
	}
	return 0;
}
