/*
 *othing is printed when printf() is called after closing
 *STDOUT.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int rc = fork();

	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		close(STDOUT_FILENO);
		printf("This shouldn't print out\n");
	} else {
		printf("This is the parent\n");
	}
	return 0;
}
