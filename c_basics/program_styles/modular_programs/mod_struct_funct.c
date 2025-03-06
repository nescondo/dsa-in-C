#include <stdio.h>

struct Rectangle
{
	int length;
	int width;
};

void initialize(struct Rectangle *r, int l, int w)
{
	r->length=l;
	r->width=w;
}

int area(struct Rectangle r)
{
	return r.length*r.width;
}

int peri(struct Rectangle r)
{
	return 2*(r.length+r.width);
}

int main()
{
	struct Rectangle r1={0,0};
	
	int l, w;

	printf("Enter Length and Width\n");
	scanf("%d %d", &l, &w);	
	
	initialize(&r1, l, w);	
	
	int a=area(r1);
	int p=peri(r1);
	
	printf("Area = %d\nPerimeter = %d\n", a, p);
	
	return 0;
}
