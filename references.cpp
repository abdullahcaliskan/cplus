#include <iostream>

using namespace std;

int main()
{
	/*
	References vs Pointers
	-References cannot have NULL references.
	-Cannot change to refer to another variable.
	-you must give variable on initializing
	*/

	int i = 15;
	int& r = i;

	double a = 1.7;
	double& b = a;

	cout << "Value of 'i' : " << i << endl;
	cout << "Value of 'i' reference 'r' : " << r << endl;

	cout << "Value of 'a' : " << a << endl;
	cout << "Value of 'a' reference 'b' : " << b << endl;

}