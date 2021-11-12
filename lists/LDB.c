// LDB - List DataBase

#include "core.c"

int main() {

	ListDataBase *list_data_base = create(0, "test1"); // creating the list.

        addElement(&list_data_base, 1, "test2"); // using function for adding item in list.

	addElement(&list_data_base, 2, "test3");

	// ....

	while (list_data_base != NULL) {

		printf("index: %d, value: %s\n", list_data_base->index, list_data_base->value);
		list_data_base = list_data_base->next;
	}

	return 0;
}

