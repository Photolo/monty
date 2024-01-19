#include "monty.h"
/**
 * f-add , adds top 2 elements
 * @head- stack head
 * @counter- line number
 * Return- no return
 */
void f_add(stack_k **head, unsigned int counter)
{
	stack_k *t;
	int len = 0, aux;

	t = *head;
	while (t)
	{
		t = t->next;
		len++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: cannot add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		dree_stack(*head);
		exit(exit_failure);
	}
	t = *head;
	aux = t->n + t->next->n;
	t->next-> = aux;
	*head = t->next;
	free(t);
}
