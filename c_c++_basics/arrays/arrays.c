#include <stdio.h>

int main() {
	
	// create an array of size 5 that only takes in integers
	int A[5];
	
	// you can index the created array and set values in given indices - remember, an int is 4 bytes in C
	A[0]=12;
	A[1]=15;
	
	// preferred way to create an array as well as instantiate it
	int B[7]={1, 9, 5, 25, 8, 99, 10};
	
	printf("Size of A: %ld\n", sizeof(A));
	printf("Value of A[0]: %d\n", A[0]);
	printf("Size of B: %ld\n", sizeof(B));
	
	// printing array output
	printf("Printing array B:\n");
	for (int i=0;i<7;i++)
	{
		printf("%d\n", B[i]);
	}
	
	// variable-sized arrays
	// this is allowed, however, you cannot initialize the array with anything using user input - must modify it within code
	// if not modified within the program, C will produce garbage values in place of each element
	int n;
	printf("Enter size of array:\n");
	scanf("%d", &n);
	int C[n]; // DO NOT try to initialize the array here - it will not work as intended; variable sized arrays cannot be initialized
	C[0]=27;
	
	printf("Size of C: %ld\n", sizeof(C));
	printf("Elements of C:\n");
	for (int i=0;i<n;i++)
	{
		printf("%d\n", C[i]);
	}
	
	// printing array output - taking an element: int x and assigning that with a value from A (taking an element X from A)
	//printf("Printing array A:\n"); - for C++ only
	//for (int x:A)
	//}
	//	printf("%d\n", A[i]);
	//}

	return 0;

}
	
