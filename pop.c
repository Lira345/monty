#include "monty.h"

/**
 * f_pop - Pops the elements from the stack
 * @head: A double pointer to a stack
 * @counter: Pointer to a line number.
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: Unable to pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
