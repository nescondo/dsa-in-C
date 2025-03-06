// struct vs. functions (aka modules or procedures)
// struct: a group of related data types
// functions: a group of related data instructions

// parameter passing: 3 methods
// 1. pass by value
// 2. pass by address
// 3. pass by reference (ONLY IN C++, not in C)

// monolithic programming: everything within the main function
// procedural (modular) programming: breaking the program into smaller sections using functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b) // int a, int b represent our 'formal' parameters
{
	int c;
	c = a + b;
	return c;
}

int main()
{
	int x, y, z;
	x = 10;
	y = 5;
	z = add(x, y); // x, y represent our 'actual' parameters
	printf("Sum is %d\n", z);
	return 0;
}


