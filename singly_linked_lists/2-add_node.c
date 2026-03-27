#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add node in start list
* @head: pointer of pointer the head of list
* @str: string in the list
*
* Return: node in list
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
