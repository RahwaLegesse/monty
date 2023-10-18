#include "monty.h"
/**
 * node_adder - node additio
 * @h: head
 * @num:integer
*/
void node_adder(stack_t **h, int num)
{

	stack_t *nodew, *tmp;

	tmp = *h;
	nodew = malloc(sizeof(stack_t));
	if (nodew == NULL)
	{ printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = nodew;
	nodew->n = num;
	nodew->next = *h;
	nodew->prev = NULL;
	*h = nodew;
}
