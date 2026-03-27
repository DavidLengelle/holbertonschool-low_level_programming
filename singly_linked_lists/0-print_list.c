#include <stdio.h>
#include "lists.h"

/**
* print_list - diplay elements of list
* @h: pointer a star of list
*
* Return: node in list
*/

size_t print_list(const list_t *h)
{

size_t nodes = 0;
const list_t *temp = h;

while (temp != NULL)
{

	if (temp->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", temp->len, temp->str);
	}

	temp = temp->next;

	nodes++;
}

return (nodes);
}
