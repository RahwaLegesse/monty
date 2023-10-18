#include "monty.h"
/**
 * push_er - it pushes elements to the stack
 * @h: head
 * @c: counter
*/
void push_er(stack_t **h, unsigned int c)
{
	int num, i = 0, sign = 0;

	if (data.arg)
	{
		if (data.arg[0] == '-')
			i++;
		for (; data.arg[i] != '\0'; i++)
		{
			if (data.arg[i] > 57 || data.arg[i] < 48)
				sign = 1;
		}
		if (sign == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(data.fd);
			free(data.con);
			stack_free(*h);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	num = atoi(data.arg);
	if (data.flag == 0)
		node_adder(h, num);
	else
		queue_add(h, num);
}
