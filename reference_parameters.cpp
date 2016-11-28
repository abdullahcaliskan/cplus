#include <iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	int a = 100;
	int b = 200;

	cout << "Before swap, value of 'a' : " << a << endl;
	cout << "Before swap, value of 'b' : " << b << endl;

	swap(a,b);

	cout << "After swap, value of 'a' : " << a << endl;
	cout << "After swap, value of 'b' : " << b << endl;
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}