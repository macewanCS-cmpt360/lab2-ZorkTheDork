#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

	int x = 100;
	int rc = fork();

	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		x += 5;
		printf("New Process(PID:%d): x=%d\n", (int) getpid(), x);
	} else {
		wait();
		x += 10;
		printf("Parent(PID:%d): x=%d\n", (int) getpid(), x);
	}
	return 0;
}
