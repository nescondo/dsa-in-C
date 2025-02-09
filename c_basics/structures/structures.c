#include <stdio.h>

// what is a structure? how i think of it: essentially an object (or data structure) that only defines
// the properties of the object - not its' functions/methods (functionality)

// defining structures
struct Rectangle {
	// we can think of how much memory each structure requires
	int length; // for instance, in C, an int is 4 bytes
	int width;
	char x; // in total, we would need to take up 8 bytes of memory to create our Rectangle struct
}; // <- DO NOT forget this semi-colon at the end of defining a struct!!!

// cool struct declaration tip
struct Box {
	int length;
	int width;
}b1, b2, b3; // <- this is similar to declaring 3 box structs globally; see below:

struct Box b4,b5,b6;
	
int main() {

	// declaring struct	
	struct Rectangle r; // now occupying memory
	
	// declaration + initialization of struct
	struct Rectangle r2={10,5};
	
	// accessing members for modification of information of a struct: dot operators
	r2.length=15;
	r2.width=10;
	
	printf("Area of rectangle is %d\n", r2.length * r2.width);
	
	// declaring many structures at once
	struct Rectangle aWholeLotofRectangles[50]; //aWholeLotofRectangles represents an array of 50 rectangles
	
	//declaring AND initializing multiple structures at once
	struct Rectangle aFewRects[3]={{2,2},{10,10},{20,5}};
	
	printf("length: %d\nwidth: %d\n", aFewRects[2].length, aFewRects[2].width);
	
	// notice that the size is 12, however, we know that int = 4 bytes and char = 1 byte; essentially, it is easier for the machine
	// to read 4 bytes at a time, so it will allocate 4 bytes for char but only use 1 byte from the allocated memory
	// this is called padding - the process of adding one or more empty bytes between different data types to align data in memory
	printf("size of rectangle: %ld\n", sizeof(r2));
	
	return 0;
}

