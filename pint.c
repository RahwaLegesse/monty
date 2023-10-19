#include "monty.h"
/**
 * print_pt - displays the top of stack
 * @h: head
 * @count:it counts
*/
void print_pt(stack_t **h, unsigned int count)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
