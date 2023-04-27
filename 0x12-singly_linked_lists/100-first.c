#include <stdio.h>

/**
 * prints_beforemain - Prints a message before the main function is executed
 */
void prints_beforemain(void)__attribute__((constructor));
void  prints_beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
