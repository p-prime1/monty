#include "main.h"

extern int top;
#define BUFFER_SIZE 10

int main(int argc, char *argv[])
{
	int fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		perror("Error reading file");
		close(fd);
		exit(EXIT_FAILURE);
	}



	close(fd);
}
