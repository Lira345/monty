#include "monty.h"

/**
 * f_sub- sustration of the stack
 * @head: A double pointer to stack head
 * @counter: Pointer to line number
 * Return: no return (void)
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int result;
	int size;

	temp = *head;
	for (size = 0; temp != NULL; size++)
		temp = temp->next;
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result = temp->next->n - temp->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
