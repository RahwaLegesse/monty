#include "monty.h"
/**
* stack_free - uses to frees a list
* @h: head
*/
void stack_free(stack_t *h)
{
	stack_t *tmp;

	tmp = h;
	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
