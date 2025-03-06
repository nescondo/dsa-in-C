#include <iostream>
using namespace std;

// C++ only
// generic functions are template functions
// generic classes are template classes

// what is a generic class, aka, a template class?
// essentially, a template of a class that can be used for multiple data types - therefore, you don't have to create new classes
// for each data type that has the same functionality

// using scope operator for practice in this file
// 'this' is a keyword to access the class (Arithmetic) data members - essentially is a pointer for whatever scope we're in

template<class T> // represents the template to use - which is the class below; <class T> represents our generic data type (T)
class Arithmetic // represents our generic class
{
	private:
		T a;
		T b;
	public:
		Arithmetic(T a, T b);
		T add();
		T sub();
};

template<class T> // since the template above for the class ended, we must template ALL of our functions associated with it
Arithmetic<T>::Arithmetic(T a, T b) // MUST include <t> for the template when using scope resolution
{
	this->a=a;
	this->b=b;
}

template<class T>
T Arithmetic<T>::add()
{
	T c;
	c = a + b;
	return c;
}

template<class T>
T Arithmetic<T>::sub()
{
	T c;
	c = a - b;
	return c;
}

int main()
{
	Arithmetic<int> ar(10,5); //when using templates, we must always type what data type we want when calling these classes
	cout<<"Integer addition: "<<ar.add()<<endl;
	
	Arithmetic<float> ar1(1.5, 1.2);
	cout<<"Float addition: "<<ar1.add()<<endl<<"Float subtraction: "<<ar1.sub()<<endl;

	return 0;
}
