#include "monty.h"

/**
 * _stack_free - frees the stack
 * @head: pointer to the head of stack
 * Return: void
*/
void _stack_free(stack_t *head)
{
	stack_t *temp = NULL;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
