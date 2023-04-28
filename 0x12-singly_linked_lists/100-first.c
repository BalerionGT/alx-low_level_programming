#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - check code
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
