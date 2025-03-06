#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// when should we use pass by address?
//	- when we want our function to directly modify the parameters given
//	- very important when we're working with larger sized items such as structs or arrays

// example of pass by address - where functions access variables out of their scope indirectly using pointers
// 1. access pointers in function
// 2. dereference variables within main program using ampersand (&) when calling function
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a, b;
	a = 10;
	b = 20;
	swap(&a, &b);
	printf("%d, %d\n", a, b);
}
