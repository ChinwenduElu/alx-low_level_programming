#include <stdio.h>

/**
* beforemain - function executed before main
*/

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
