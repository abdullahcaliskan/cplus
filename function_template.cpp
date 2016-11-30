#include <iostream>
#include <string>
using namespace std;

/*
Template, veri tipinden bağımsız olarak işlem yapmamızı sağlayan yapıdır. (Blueprint veya formül)

*/

template <typename T>
inline T const& Max(T const& a, T const& b) {
	return a > b ? a:b;
}

int main()
{
	int i=20;
	int j=15;
	cout << "Max : " << Max(i,j) << endl;

	double x=14.23;
	double y=78.64;
	cout << "Max : " << Max(x,y) << endl;
}