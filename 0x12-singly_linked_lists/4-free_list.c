#include "list.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the link
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node.
	 */
	while ((current = h) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
