#include "monty.h"
/**
 * pall_fun - prints the stack
 * @h: head
 * @c: no used
 */
void pall_fun(stack_t **h, unsigned int c)
{
	stack_t *hd;
	(void)c;

	hd = *h;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
