#include <iostream>
using namespace std;

// struct vs. class in C++
// struct = default access specifier = public
// class = default access specifier = private

// :: operator (not shown in code): allows to access identifiers (classes, functions, variables, etc.) defined in different scopes
// known as the scope resolution operator
// ex. Rectangle::area()

//OO OVERVIEW:
//constructors - intial state of an object with default data members (attributes/properties)
//set methods/functions - mutator functions that modify data members/attributes/properties
//get methods/functions - accessor functions that access/return current state of data members/attributes/properties
//destructor method/function - function to destroy any objects created in the heap (dynamically allocated)
//NOTE - destructor is called automatically whenever the main function ends

class Rectangle
{
	private:
		int length;
		int width;
	
	public:
		Rectangle() //first two classes represent class constructor overload: where I give multiple constructors
		{
			length=width=0;
		}
		Rectangle(int l, int w)
		{
			length=l;
			width=w;
		}
		
		int area()
		{
			return length*width;
		}
		
		int peri()
		{
			return 2*(length+width);
		}
		
		int getLength()
		{
			return length;
		}
		
		int getWidth()
		{
			return width;
		}
		
		void setLength(int l)
		{
			length=l;
		}
		
		void setWidth(int w)
		{
			width=w;
		}
		
		~Rectangle() //destructor - used to destroy any objects created to free memory
		{
			cout<<"Destructor"<<endl; // nothing to destroy because we didn't dynamically allocate anything - leaving it blank
		}
};

int main()
{
	int l=0,w=0;
		
	cout<<"Enter Length and Width"<<endl;
	cin>>l>>w;	
		
	Rectangle r(l, w);
	
	int a=r.area();
	int p=r.peri();
	
	cout<<"Area = "<<a<<endl<<"Perimeter = "<<p<<endl;
		
	r.setLength(20);
	r.setWidth(10);
		
	int new_a=r.area();
	int new_p=r.peri();
	
	cout<<"New area = "<<new_a<<endl<<"New perimeter = "<<new_p<<endl;

	return 0;	
}
