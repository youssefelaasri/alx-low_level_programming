#include "lists.h"
#include <stdio.h>
/**
*fun - our  func
*/
void fun(void)__attribute__ ((constructor));

void fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
