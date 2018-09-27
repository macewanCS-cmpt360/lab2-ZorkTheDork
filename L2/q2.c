#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd = open("./test.txt", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
	int rc = fork();

	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		printf("Child: File Descriptor = %d\n", fd);
		write(fd, "This is a test from the child in q2\n", 37);
	} else {
		printf("Parent: File Descriptor = %d\n", fd);
		write(fd, "This is a test from the parent in q2\n", 37);
	}
	return 0;
}
