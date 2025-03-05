#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modify(int *x, char *y)
{
	int new_int;
	char new_c = 'Z';
	new_int = 1337;
	*x = new_int;
	*y = new_c;	
}

int main()
{
	int a = 50;
	char b = 'A';
	printf("a = %d and b = %c\n", a, b);
	
	modify(&a, &b);
	printf("a = %d and b = %c\n", a, b);
	
	return 0;
}
