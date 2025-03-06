#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// arrays CANNOT be passed as a value EVER (or reference) - they will always be passed by address
// the fun function doesn't know the size of the array being passed in, which is why we always include that as a parameter (int n)
void fun(int *A, int n) // int A[] is a pointer to the A array in main - can also pass in as int *A (probably better for clarity)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n", A[i]);
	printf("\n");
	
	A[0]=1338;
	A[1]=1337;
	A[2]=505050;
	A[3]=1234;
	
	printf("modified array\n");
	for(i=0;i<n;i++)
		printf("%d\n", A[i]);
	printf("\n");
}

// a function that returns the address of an array
int * r_array(int n)
{
	int *p;
	p=(int *)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
		p[i]=i+1;

	return p;
}

int main()
{
	int i=0;
	int A[5]={2,4,6,8,10};
	fun(A,5);
	
	int *B;
	B=r_array(3);
	printf("Address of the B array: %p\n", (void *)B); //type casting to (void *) is specifically for the printf function to prevent
							   //undefined behavior
	for(i=0;i<3;i++)
		printf("Numbers at index %d in B array: %d\n", i, B[i]);
	return 0;
}
