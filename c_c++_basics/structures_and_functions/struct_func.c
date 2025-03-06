#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

// struct/function organization for a C program - closest thing we can get to
// OOP
struct Rectangle 
{
	int length;
	int width;
};

void initialize(struct Rectangle *r, int l, int w) // pass by address
{
	r->length=l;
	r->width=w;
	printf("Initialized rectangle length: %d\nInitialized rectangle width: %d\n", r->length, r->width);
}

int area(struct Rectangle r) // pass by value (remember, creates a copy - doesn't modify original)
{
	printf("Area of rectangle: %d\n", r.length * r.width);
	return r.length * r.width;
}

void changeLength(struct Rectangle *r, int l) // pass by address
{
	r->length=l;
	printf("New length: %d\n", r->length);
}

void changeWidth(struct Rectangle *r, int w) // pass by address
{
	r->width=w;
	printf("New width: %d\n", r->width);
}

int main() 
{
	struct Rectangle r1;
	
	initialize(&r1, 10, 5);
	area(r1);
	changeLength(&r1, 20);
	changeWidth(&r1, 10);
	area(r1);
	
	return 0;	
}
