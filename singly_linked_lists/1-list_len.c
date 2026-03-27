#include <stdio.h>
#include "lists.h"

/**
* list_len - diplay lengt of the list
* @h: pointer a star of list
*
* Return: node in list
*/

size_t list_len(const list_t *h)
{

size_t nodes = 0;
const list_t *temp = h;

while (temp != NULL)
{
	temp = temp->next;
	nodes++;
}

return (nodes);
}
