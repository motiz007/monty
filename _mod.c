#include "monty.h"
/**
 * _mod - gives the remainder of division
 * @stack: double pointer to the stack 
 * @line_number: line no 
 * Return: void
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int mod;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	mod = ((*stack)->next->n) % ((*stack)->n);
	(*stack)->n = mod;
	_pop(stack, line_number);
}