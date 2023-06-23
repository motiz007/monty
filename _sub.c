#include "monty.h"

/**
 * _sub - subtracts the top two items in stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _sub(stack_t **stack, unsigned int line_number)
{
	int sub = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	sub = ((*stack)->next->n) - ((*stack)->n);
	(*stack)->next->n = sub;
	_pop(stack, line_number);
}