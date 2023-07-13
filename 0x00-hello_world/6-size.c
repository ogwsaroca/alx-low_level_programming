#include <stdio.h>
/**
 * main - Program printing various sizes of computer types
 * Return 0 
 */
int(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
