//Ex - In classes ,we are binding the  data members and member functions  into a single group so by doing this we are reusing the code and also it will provide security using the concept of classes 
// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// data hidden from outside world
		int x;
	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x = a;
		}
		// function to return value of
		// variable x
		int get()
		{
			return x;
		}
};

// main function
int main()
{
	Encapsulation obj;
	obj.set(5);
	cout<<obj.get();
	return 0;
}
