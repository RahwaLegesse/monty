#include "monty.h"
/**
 * queue_f - top printer
 * @h: head
 * @c:counter
 */
void queue_f(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	data.flag = 1;
}

/**
 * queue_add - node addition on tail stack
 * @num: value
 * @h: head
 */
void queue_add(stack_t **h, int num)
{
	stack_t *nodew, *tmp;

	tmp = *h;
	nodew = malloc(sizeof(stack_t));
	if (nodew == NULL)
	{
		printf("Error\n");
	}
	nodew->n = num;
	nodew->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*h = nodew;
		nodew->prev = NULL;
	}
	else
	{
		tmp->next = nodew;
		nodew->prev = tmp;
	}
}
