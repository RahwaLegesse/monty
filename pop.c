#include "monty.h"
/**
 * _extract  displays the top the element
 * @h: head
 * @c: the number
 */
void _extract(stack_t **h, unsigned int c)
{
	stack_t *head;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	*h = head->next;
	free(head);
}
