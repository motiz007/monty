#include "monty.h"

/**
 * _push - inserts an int at top of stack
 * @stack: pointer to head of stack
 * @line_number: interpreted line
 * Return: void
*/
void _push(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(file);
		exit(EXIT_FAILURE);
	}

	if (_isdigit(data[1]) != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	num = atoi(data[1]);
	node->n = num;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
		node->next->prev = node;
	*stack = node;
}
