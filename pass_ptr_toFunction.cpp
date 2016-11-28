#include <iostream>
#include <ctime>

using namespace std;

void getSeconds(unsigned long *ptr);

int main()
{
	unsigned long second;
	getSeconds(&second);

	cout << "Second : " << second << endl;

	return 0;
}

void getSeconds(unsigned long *ptr)
{
	*ptr = time(NULL);
}