#include "monty.h"
/**
 * _insert - it inserts two elements on the top  of the stack.
 * @h:head
 * @c: number of line argument
*/
void _insert(stack_t **h, unsigned int c)
{
	stack_t *head;
	int length = 0;
	int tmp;

	head = *h;
	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't insert, stack too short\n", c);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	tmp = head->n + head->next->n;
	head->next->n = tmp;
	*h = head->next;
	free(head);
}
