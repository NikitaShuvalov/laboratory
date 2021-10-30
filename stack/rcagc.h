#include "../lists/db.h"
#include <stdio.h>
#include <stdlib.h>

ListDataBase stackCreate()
{
	ListDataBase *list_data_base = create_node("test");
	return *list_data_base;
}

void robotPut(ListDataBase **list_data_base, char *set_value)
{
	ListDataBase *new_element = create_node(set_value);
	ListDataBase *node = list_data_base;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new_element;
}
