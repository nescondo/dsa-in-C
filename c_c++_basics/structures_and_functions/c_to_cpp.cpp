#include <iostream>
using namespace std;

// transforming a C program to C++ with objects
class Rectangle
{	
	private: // private attributes
		int length;
		int width;
	
	public: // public methods	
		Rectangle(int l, int w) // allows us to initialize an object without having to have a separate function for it
		{
			length=l;
			width=w;
			cout<<"Length of initialized rectangle: "<<length<<endl<<"Width of initialized rectangle: "<<width<<endl;
		}
		
		int area()
		{
			cout<<"Area of rectangle: "<<length*width<<endl; //printing in C++
			return length * width;
		}

		void changeLength(int l)
		{
			length=l;
			cout<<"New length of rectangle: "<<length<<endl;
		}

		void changeWidth(int w)
		{
			width=w;
			cout<<"New width of rectangle: "<<width<<endl;
		}
};

int main()
{
	Rectangle r(10,5); // declaration
	
	// r.initialize(10,5); // we need this because the attributes are private
	r.area();
	r.changeLength(20);
	r.changeWidth(10);
	r.area();
	
	return 0;
}
