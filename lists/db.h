#include <stdio.h>
#include <stdlib.h>

typedef struct ListDataBase
{
	char *value;

	struct ListDataBase *next;
} ListDataBase;

ListDataBase *create(char *set_value)
{
	ListDataBase *node = (ListDataBase *)malloc(sizeof(ListDataBase));

	node->value = set_value;

	node->next = NULL;

	return node;
}

void addElement(ListDataBase **list_data_base, char *set_value)
{
	ListDataBase *new_element = create(set_value);

	new_element->next = *list_data_base;
	*list_data_base = new_element;
}
