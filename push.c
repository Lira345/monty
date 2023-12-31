#include "monty.h"

/**
 * f_push - Parses an argument onto the stack.
 * @head: A doublr pointer to the stack head.
 * @counter: Pointer to line number.
 * Return: no return (void)
 */
void f_push(stack_t **head, unsigned int counter)
{
	int val;
	int index = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			index++;
		for (; bus.arg[index] != '\0'; index++)
		{
			if (bus.arg[index] > 57 || bus.arg[index] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	val = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, val);
	else
		addqueue(head, val);
}
