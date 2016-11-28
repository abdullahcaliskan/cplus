#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::endl;

int main()
{
	int yas = 20;
	int *ptr1Yas = &yas;
	int **ptr2Yas = &ptr1Yas;

	cout << "Address of 'yas' : " << &yas << " Value of 'yas' : " << yas << endl;
	cout << "Address of 'ptr1Yas' : " << &ptr1Yas << " Value of 'yas' : " << *ptr1Yas << endl;
	cout << "Address of 'ptr2Yas' : " << &ptr2Yas << " Value of 'yas' : " << **ptr2Yas << endl;  
}