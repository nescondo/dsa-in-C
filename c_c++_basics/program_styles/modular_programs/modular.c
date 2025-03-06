#include <stdio.h>

int area(int length, int width)
{
	return length*width;
}

int peri(int length, int width)
{
	return 2*(length+width);
}

int main()
{
	int length=0,width=0;
	
	printf("Enter Length and Width\n");
	scanf("%d %d", &length, &width);
	
	int a=area(length,width);
	int perimeter=peri(length,width);
	
	printf("Area = %d\nPerimeter = %d\n", a, perimeter);
	
	return 0;
}
