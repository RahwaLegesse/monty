#include "monty.h"
data_t data = {NULL, NULL, NULL, 0};
/**
* main - main function
* @argc: argument numbers
* @argv: arguement
* Return:always zero
*/
int main(int argc, char *argv[])
{
	char *con;
	FILE *fd;
	size_t s = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	data.fd = fd;
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		con = NULL;
		read_line = getline(&con, &s, fd);
		data.con = con;
		count++;
		if (read_line > 0)
		{
			exe_cute(con, &stack, count, fd);
		}
		free(con);
	}
	stack_free(stack);
	fclose(fd);
return (0);
}
