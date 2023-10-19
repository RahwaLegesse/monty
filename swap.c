#include "monty.h"
/**
 * _exchange - it swaps the element.
 * @h: head
 * @c: counter for line_number
 */
void _exchange(stack_t **h, unsigned int c)
{
	stack_t *head;
	int length = 0, tmp;

	head = *h;
	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	tmp = head->n;
	head->n = head->next->n;
	head->next->n = tmp;
}
