#!/bin/bash
#include <stdio.h>
/**
 * main - entry point
 * return always 0 (success)
 */
int main(void)
{ 	int a;
	long int b;
	long long int c;
	float f;
	char d;

	printf("Size of a char: %lu byte(s)\n",
			(unsigned long)sizeof(d));
	printf("Size of a int: %lu byte(s)\n",
                        (unsigned long)sizeof(a));
	printf("Size of a long unsigned int: %lu byte(s)\n",
                        (unsigned long)sizeof(b));
	printf("Size of a long long unsigned int: %lu byte(s)\n",
                        (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n",
                        (unsigned long)sizeof(f));
	return (0);
}
