// core.

#include <stdio.h>
#include <stdlib.h>

typedef struct ListDataBase {

	int index;
	char *value;

	struct ListDataBase *next;
} ListDataBase;


ListDataBase *create(int set_index, char *set_value) { // args: int set_index, char *set_value.

	ListDataBase *node = (ListDataBase *)malloc(sizeof(ListDataBase));

	node->index = set_index;

	node->value = set_value;

	node->next = NULL;

	return node;
}


// Function for adding items in list.
void addElement(ListDataBase **list_data_base, int set_index, char *set_value) {

	ListDataBase *new_element = create(set_index, set_value);

	new_element->next = *list_data_base;
	*list_data_base = new_element;
}

