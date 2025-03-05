#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// when should we use pass by value?
// 	- when we want a function to process something and return a specific result
// actual parameters will not be modified if any changes are done to formal parameters: example below
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() 
{
	int a, b;
	a = 10;
	b = 20;
	swap(a, b);
	printf("%d, %d\n", a, b);
}
