#include "monty.h"

/**
 * f_rotr - Rotates the stack moving the top element to the bottom.
 * @head: A double pointer to stack head
 * @counter: Pointer to line number
 * Return: no return (void)
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
