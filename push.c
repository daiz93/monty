#include "monty.h"
#include <stdio.h>
#include <string.h>


/**
 * push - 
 * @c: char to push
 * Return: 0 (failed), 1 (success)
 */

int push (int argc)
{
	int num;

	num = argc;
	if(strlen(num) == 0)
	{
		printf('L<line_number>: usage: push integer\n');
		return EXIT_FAILURE;
	}
	else
	{
		printf(atoi(num));
		return 1;
		
	}

}
