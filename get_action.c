#include "monty.h"

/**
 * get_action - retrievies command to be taken
 * @stack: pointer to head of stack
 * @line_number: the line being intepreted
 * Return: void
*/

void get_action(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t commands[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{NULL, NULL}
	};

	for (i = 0; commands[i].opcode != NULL; i++)
	{
		if (strcmp(commands[i].opcode, data[0]) == 0)
		{
			commands[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, data[0]);
	fclose(file);
	_stack_free(*stack);
	exit(EXIT_FAILURE);
}