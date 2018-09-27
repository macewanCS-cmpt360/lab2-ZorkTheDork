CC = gcc
CFLAGS = -Wall -g

all: q1 q2 q3 q7 shell

q1: q1.o
	$(CC) $(CFLAGS) -o $@ q1.o

q1.o: q1.c
	$(CC) $(CFLAGS) -c q1.c

q2: q2.o
	$(CC) $(CFLAGS) -o $@ q2.o

q2.o: q2.c
	$(CC) $(CFLAGS) -c q2.c

q3: q3.o
	$(CC) $(CFLAGS) -o $@ q3.o

q3.o: q3.c
	$(CC) $(CFLAGS) -c q3.c

q7: q7.o
	$(CC) $(CFLAGS) -o $@ q7.o

q7.o: q7.c
	$(CC) $(CFLAGS) -c q7.c

shell: shell.o
	$(CC) $(CFLAGS) -o $@ shell.o

shell.o: shell.c
	$(CC) $(CFLAGS) -c shell.c
clean:
	rm *.o
