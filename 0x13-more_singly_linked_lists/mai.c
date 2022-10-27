#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 0);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	free_listint_safe(&head2);
	free_listint_safe(&head);
	printf("%p, %p\n", (void *)head2, (void *)head);
	return (0);
}
