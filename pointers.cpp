#include <iostream>

using namespace std;

int main()
{
	int var1;
	char var2[10];

	cout << "Address of var1 :" << &var1 << endl;
	cout << "Address of var2 :" << &var2 << endl;

	int *ptrVar1;
	ptrVar1 = &var1;

	char *ptrVar2;
	ptrVar2 = &var2[0];
	cout << "Address of var2 char Array / string:" << ptrVar2 << endl;

	int array_var[5] = {1,2,3,4,5};
	int *ptrArray = &array_var[0];


	cout << "Pointer Array :" << &array_var[0] << endl; 
	cout << "PTR1 :" << ptrVar1 << endl;
	cout << "PTR2 :" << ptrArray << endl;

	cout << "Pointer Arithmatic "<< endl;

	for (int i=0; i<(sizeof(array_var) / sizeof(array_var[0])); i++)
	{
		cout << "Address :" << (ptrArray + i) << " Value : " << *(ptrArray + i) << endl;  
	}

	char karakterDizisi[] = {"abdullah"};
	char *charArray = &karakterDizisi[0];
	cout << "Value of string : " << charArray << endl;
	return 0;
}