#include "lists.h"
#include <stdio.h>
/**
*fun - our  func
*/
void fun(void)__attribute__ ((constructor));

void fun(void)
{
	printf("This text is printed before main()\n");
}
