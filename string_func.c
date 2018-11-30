#include <stdio.h>
#include "header.h"

int string_length_func(char *str)
	{
	int counter=0;
	while(*str!='\0')
		{
		str++;
		counter++;
		}
	return counter;
	}
