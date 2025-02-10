#include <stdio.h>
#include <stdlib.h>

struct Student {
	// char name[15]; 15 bits/4 bytes (round up) - caused buffer overflow - my reasoning was because C always has null termination
	// at the end of strings, a string with exactly 15 bits allocated to it will not be able to terminate/end, therefore,
	// if the space in memory just so happens to have a section filled next to it, it will overflow to the succeeding section
	// of memory. so I think it will be better to have a bigger buffer to your strings/arrays to prevent this
	
	char name[30]; // 30 bits/8 bytes (round up)
	char gnum[15]; // 15 bits/4 bytes (round up)
	float gpa; // 4 bytes
	int year; // 4 bytes
};

int main() {
	
	struct Student student1={"Nikolai Escondo","G12345678",4.0,2};

	// pointer declared in stack
	struct Student *p;
	
	// pointer instantiated in the stack with memory address of student1
	p = &student1;
	
	// each variable of student1 accessed via its' pointer	
	printf("student1 name: %s\n", (*p).name);
	printf("student1 gnum: %s\n", (*p).gnum);
	printf("student1 gpa: %.2f\n", (*p).gpa);
	printf("student1 year: %d\n", (*p).year);
	
	// the memory address of the student1 variable within the stack
	printf("student1 memory address (in stack): %p\n", (void*)&p);
	
	// declaring a pointer (in the stack) to point to a memory address in the heap
	struct Student *p2;
	
	// allocating memory in the heap for the exact size of how much space a Student
	// struct would take up
	p2 = (struct Student*)malloc(sizeof(struct Student));
	
	// instantiating a Student struct to fill that memory address created by the p2 pointer
	// the -> operator combines the dereference operator (*) and member access operator of a struct (.); use this
	// when trying to assign variables of a struct into an already allocated piece of memory in the heap
	p2->name, sizeof(p2->name), "Estefany Flores"; p2->gnum, sizeof(p2->gnum), "G7129323"; p2->gpa=4.0; p2->year=4;
	
	printf("student2 name: %s\n", (*p2).name);
	printf("student2 gnum: %s\n", (*p2).gnum);
	printf("student2 gpa: %.2f\n", (*p2).gpa);
	printf("student2 year: %d\n", (*p2).year);
	
	printf("student2 memory address (in heap): %p\n", (void*)&p2);	
	
	// free the allocated memory once finished with the variable to prevent memory leakage (more
	// so important when working with long running programs
	
	free(p2);
	return 0;
}
