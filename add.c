#include "monty.h"
/**
 * _insert - it adds the elements
 * @h: head
 * @c: counter
 */
void _insert(stack_t **h, unsigned int c)
{
	stack_t *hd;
	int length = 0, tmp;

	hd = *h;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", c);
		fclose(data.fd);
		free(data.con);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	tmp = hd->n + hd->next->n;
	hd->next->n = tmp;
	*h = hd->next;
	free(hd);
}
