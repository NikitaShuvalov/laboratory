// LDB - List DataBase

#include <stdio.h>
#include <stdlib.h>
#include "db.h"

int main()
{
	ListDataBase *list_data_base = create("test1");

	addElement(&list_data_base, "test2");

	while (list_data_base != NULL)
	{
		printf("value: %s\n", list_data_base->value);
		list_data_base = list_data_base->next;
	}

	return 0;
}
