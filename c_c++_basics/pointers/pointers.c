// what is a pointer?
// an address variable - stores the address of data, not the data itself

// why do we use pointers?
// to indirectly access data, accessing the heap, accessing external resources, parameter passing

// why do we need to indirectly access data?
// one reason is that the heap is inaccessible to a program (it is outside of the jurisdiction of the program)
// think about how the relationship between an external hard drive and your laptop works - you can't directly access data in the
// hard drive without having a route to that memory; which is created once you connect it to your laptop (essentially, the route is your
// pointer to that data) - a lot of explanation, but to keep it short, to access heap memory, outside resources, and parameter passing

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
	p=&a; // think of & (ampersand) as saying "the address of _" -> in this case, "the address of a"

	// here, we create the pointer inside the heap. we mention how much memory we want to occupy
	// in bytes (5 bytes), then we must tell the compiler what the size of each data type is (sizeof(int) does this)
	// in this example, since we want 5 ints and the size of an int is 4 bytes in C, 
	// we will allocate 20 bytes of memory in the heap.
	// malloc returns a void pointer, so we must type cast it and say it is an integer pointer (int *)
	p = (int *)malloc(5*sizeof(int));
	
	// what is a void pointer?
	// a pointer that does not have an associated data type - that's why we had to type cast our malloc pointer
	
	printf("from variable a: value of a = %d\n", a);

	// this is how you DEREFERENCE a variable (meaning, since p is a pointer, it's storing the actual memory address of a,
	// so, you must dereference it to access the actual value within the memory address)
	printf("from pointer: value of a = %d\n", *p);
	
	// notice that pointers have the value of the ADDRESS of the variable they are referencing
	// also notice that you have to use %p to print memory addresses, as well as typecast each variable (pointer or not)
	// as a void pointer in order to access the variable's memory address.
	// this is the correct way to show the memory address of a variable, but you can simply print a pointers stored address
	// by using %d and using the pointer variable without the asterisk (ex. *p)
	printf("from pointer: memory address of a = %p\n", (void*)&a);
	printf("from pointer: memory address in the heap of p = %p\n", (void*)&p);
	
	// ---------------------------------------------------------------	
	// example of an array in the stack w/ a pointer
	printf("array in the stack:\n");
	int B[5]={5,99,55,102,1};
	int *p2;
	// this works because the name of an array is always the starting address of the array, so you do not need the ampersand (&)
	// if you want to use the ampersand, you can do p=&A[0]
	p2=B; // p=&A is INCORRECT, p2=&B[0] and p2=B are CORRECT
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n", p2[i]);
	}
	
	// ----------------------------------------------------------------
	// example of an array in the heap
	printf("array in the heap:\n");
	int *p3; // pointer is in the stack
	p3=(int *)malloc(5*sizeof(int)); // pointer points to data in the heap
	p3[0]=10; p3[1]=12; p3[2]=15; p3[3]=21; p3[4]=33;
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n", p3[i]);
	}	

	// whenever we dynamically allocate memory to the heap, we must release the memory when we are done using it (prevents memory leaks)
	free(p3);
	
	// all pointers take 8 bytes in memory
	return 0;
}
