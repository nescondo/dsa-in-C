#include <iostream>
using namespace std;

int area(int length, int width)
{
	return length * width;
}

int peri(int length, int width)
{
	return 2*(length+width);
}

int main()
{
	int length=0,width=0;
	cout<<"Enter Length and Width"<<endl;
	cin>>length>>width;
	
	int a=area(length,width);
	int perimeter=peri(length,width);
	
	cout<<"Area = "<<a<<endl<<"Perimeter = "<<perimeter<<endl;
	
	return 0;	
}
