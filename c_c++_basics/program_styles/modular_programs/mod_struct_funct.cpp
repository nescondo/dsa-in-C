#include <iostream>
using namespace std;

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
	
	int l=0, w=0;

	cout<<"Enter Length and Width"<<endl;
	cin>>l>>w;
	
	initialize(&r1, l, w);
	
	int a=area(r1);
	int p=peri(r1);
	
	cout<<"Area = "<<a<<endl<<"Perimeter = "<<p<<endl;

	return 0;
}
