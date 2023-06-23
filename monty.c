#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *data[2];
FILE *file;

/**
 * main - intepreter for monty.m files
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	stack_t *head = NULL;
	char *str = NULL;
	ssize_t rVal;
	size_t buff = 10;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		rVal = getline(&str, &buff, file);
		if (rVal == -1)
			break;
		line_number++;
		if (*str == '\n')
			continue;
		data[0] = strtok(str, " \n");
		if (data[0] == NULL)
			_nop(&head, line_number);
		else if (strcmp(data[0], "push") == 0)
			data[1] = strtok(NULL, " \n");

		get_action(&head, line_number);
	}
	free(str);
	_stack_free(head);
	fclose(file);
	exit(EXIT_SUCCESS);
}
