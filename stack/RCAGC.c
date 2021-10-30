#include <stdio.h>
#include <stdlib.h>
#include "rcagc.h"

int main()
{
	ListDataBase food_sect = stackCreate();

	robotPut(&food_sect, "meat");

	return 0;
}
