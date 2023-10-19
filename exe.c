#include "monty.h"
/**
* exe_cute - executer
* @stack: stack
* @count: counter
* @fd: file
* @con: content
* Return:nothing to return
*/
int exe_cute(char *con, stack_t **stack, unsigned int count, FILE *fd)
{
	instruction_t opst[] = {
				{"push", push_er},
				{"pint", print_pt},
				{"pall", pall_fun},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *opp;

	opp = strtok(con, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	data.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && opp)
	{
		if (strcmp(opp, opst[j].opcode) == 0)
		{	opst[j].f(stack, count);
			return (0);
		}
	j++;
	}
	if (opp && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, opp);
		fclose(fd);
		free(con);
		stack_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
