#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structures can be called by all 3 methods - pass by value, pass by address, pass by reference (C++ only)

struct Rectangle
{
	int length;
	int width;
};

struct Test
{
	int A[5];
	int n;
};

int area(struct Rectangle r) //pass by value - a separative struct is created (not the same r1 struct - a copy of it is created)
{
	r.length++; //this does NOT change the r1 struct in main!
	return r.length * r.width;
}

void changeLength(struct Rectangle *p, int l) //pass by address
{
	p->length=l; //this DOES change the r1 struct in main!
}

void fun(struct Test t1) //pass by value with a struct that has an array
{
	int i;
	//since it's pass by value, a copy of the struct is made - therefore, the array is also copied (expensive)
	//since it's pass by value, all of this is a copy - you are not changing the struct within main!
	t1.A[0]=10;
	t1.A[1]=9;
	for(i=0;i<(sizeof(t1.A)/sizeof(t1.A[0]));i++)
		printf("t1 has an element of %d at index %d\n", t1.A[i], i);
}

struct Rectangle *new_func() //the new_func() is a pointer that is returned to a struct Rectangle
{
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	
	p->length=15;
	p->width=7;
	
	return p;
}

int main()
{
	int i;
	struct Rectangle r1={10,5};
	printf("r1 current length: %d\nr1 current width: %d\nr1 current area: %d\n", r1.length, r1.width, r1.length*r1.width);
	printf("\n");
	printf("r1 from area function (pass by value - creates new copy): %d\n", area(r1));
	changeLength(&r1, 20);
	printf("new r1 length: %d\n", r1.length);

	printf("\n");

	struct Test t={{2, 4, 6, 8, 10},5};
	fun(t);
	for(i=0;i<(sizeof(t.A)/sizeof(t.A[0]));i++)
		printf("t has an element of %d at index %d\n", t.A[i], i);
	
	struct Rectangle *ptr=new_func();
	printf("pointer rectangle length: %d, pointer rectangle width: %d\n", ptr->length, ptr->width);
	
	return 0;
}
