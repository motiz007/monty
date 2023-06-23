#include "monty.h"

/**
 * _mul - multiply the top two items in stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _mul(stack_t **stack, unsigned int line_number)
{
	int mul = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	mul = ((*stack)->next->n) * ((*stack)->n);
	(*stack)->next->n = mul;
	_pop(stack, line_number);
}