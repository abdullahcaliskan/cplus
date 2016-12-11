#include <iostream>

using namespace std;

// Information Hiding, OOP için çok önemli bir kavramdır.
// Nesnemize dışarıdan başka metodların veya nesnelerin müdahale
// etmesi istemedigimiz bir şey.
// public , private : sadece o nesne erişir., protected : Kalıtım, aynı assembly

class Line {
	public:
		double length;
		void setLength(double len);
		double getLength(void);
};
double Line::getLength(void) {
	return length;
}
void Line::setLength(double len) {
	length = len;
}


int main()
{
	Line l1;
	l1.setLength(12.0);
	cout << l1.getLength() << endl;
}
