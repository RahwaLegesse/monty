#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct data_s - line content, fd
 * @arg: arguement
 * @fd:file
 * @con: content
 * @flag: flag
 * Description:carries value
 */
typedef struct data_s
{
	char *arg;
	FILE *fd;
	char *con;
	int flag;
}  data_t;
extern data_t data;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void stack_free(stack_t *h);
void push_er(stack_t **h, unsigned int c);
int exe_cute(char *con, stack_t **stack, unsigned int count, FILE *fd);
void node_adder(stack_t **h, int num);
void queue_f(stack_t **h, unsigned int c);
void queue_add(stack_t **h, int num);
void pall_fun(stack_t **h, unsigned int c);
void print_pt(stack_t **h, unsigned int count);
#endif
