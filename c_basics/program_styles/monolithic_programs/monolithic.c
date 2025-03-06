//#include <iostream>
//using namespace std; C++ code
#include <stdio.h>

int main()
{
	int length=0,width=0; //initialize these variables to prevent any mistypes or errors in the program
	printf("Enter length and width: ");
	//cin>>length>>width;
	scanf("%d %d", &length, &width);
	
	int area=length*width;
	int peri=2*(length+width);
	
	printf("Area = %d\nPerimeter = %d\n", area, peri);
	return 0;
}
