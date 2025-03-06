#include <iostream>
using namespace std;

int main()
{
	int length=0,width=0;
	cout<<"Enter Length and Width: ";
	cin>>length>>width;
	
	int area=length*width;
	int peri=2*(length+width);
	
	cout<<"Area = "<<area<<endl<<"Perimeter = "<<peri<<endl;
	return 0;
}
