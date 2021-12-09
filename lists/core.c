// core.

#include <stdio.h>
#include <stdlib.h>

typedef struct ListDataBase {
	int index;
	char *value;

	struct ListDataBase *next;
} ListDataBase;

int list_item_index = 0;

ListDataBase *create(int set_index, char *set_value) {
	ListDataBase *node = (ListDataBase *)malloc(sizeof(ListDataBase));
	
	node->index = set_index;

	node->value = set_value;

	node->next = NULL;

	return node;
}


// Function for adding items in list.
void add_element_in_database(ListDataBase **list_data_base, int set_index, char *set_value) {
	// list_item_index++;
	
	ListDataBase *new_element = create(set_index, set_value);

	new_element->next = *list_data_base;
	*list_data_base = new_element;
}


// Function that returns the item at its index in the list.
void search_element_in_database(ListDataBase **list_data_base, int index) {
	ListDataBase *node = (ListDataBase *)malloc(sizeof(ListDataBase));

	node->next = *list_data_base;

	while (node->next != NULL) {
		node = node->next;
		if (node->index == index) {
			printf("Value: %s\n", node->value);
		}
	}
}


// Function that returns the index of an element in the list.
void search_index_in_database(ListDataBase **list_data_base, char *value) {
	ListDataBase *node = (ListDataBase *)malloc(sizeof(ListDataBase));

	node->next = *list_data_base;

	while (node->next != NULL) {
		node = node->next;
		if (node->value == value) {
			printf("Index: %d\n", node->index);
		}
	}
}
