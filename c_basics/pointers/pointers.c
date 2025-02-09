// what is a pointer?
// an address variable - stores the address of data, not the data itself

// why do we use pointers?
// to indirectly access data, accessing the heap, accessing external resources, parameter passing

// why do we need to indirectly access data?
// one reason is that the heap is inaccessible to a program (it is outside of the jurisdiction of the program)
// think about how the relationship between an external hard drive and your laptop works - you can't directly access data in the
// hard drive without having a route to that memory; which is created once you connect it to your laptop (essentially, the route is your
// pointer to that data)

// what are the three portions of memory?
// heap, stack, code section

// what portions of memory does the actual program access directly?
// code section, stack - this is because heap memory is external of the program; meaning, to access data in the heap, we need a pointer

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// data variable within main (in the stack)
	// you remember how int values are 4 bytes? This directly affects how many addresses the specific int takes in memory
	// for instance, the int variable a, will occupy the value 10 in 4 different addresses such as in address 200, 201, 202, 203
	int a=10;
	
	// address variable (pointer)
	// declaration of a pointer
	int *p; // declaring a pointer this way creates the pointer inside of the stack, not the heap

	// now, we initialize the pointer to point to the variable, a - in this specific example, we are still in the stack -
	// so the pointer is pointing to the variable, a
	// remember, pointers also occupy memory, but in vastly smaller amounts
	p=&a;

	// here, we create the pointer inside the heap. we mention how much memory we want to occupy
	// in bytes (5 bytes), then we must tell the compiler what the size of each data type is (sizeof(int) does this)
	// in this example, since we want 5 ints and the size of an int is 4 bytes in C, 
	// we will allocate 20 bytes of memory in the heap.
	// malloc returns a void pointer, so we must type cast it and say it is an integer pointer (int *)
	p = (int *)malloc(5*sizeof(int));
	
	// what is a void pointer?
	// a pointer that does not have an associated data type - that's why we had to type cast our malloc pointer
	
	printf("from variable a: value of a = %d\n", a);

	// this is how you REFERENCE a variable
	printf("from pointer: value of a = %d\n", *p);
	
	// notice that pointers have the value of the ADDRESS of the variable they are referencing
	printf("from pointer: memory address of a = %p\n", (void*)&a);
		
	return 0;
}
