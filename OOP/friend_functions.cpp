#include <iostream>

using namespace std;

class Box
{
	double width;
	public:
		double length;
		friend void printWidth( Box  box ); 
		void setWidth( double wid );
};

void Box::setWidth( double wid ){
	width = wid;
}
// printWidth, Box sınıfının bir üyesi değildir. Ama onun arkadaşı olarak
// tanımlandıgı için, Box sınıfının tüm üyelerine erişebilir.
void printWidth( Box box )
{
	cout << "Width of the Box : " << box.width << endl;
}

int main()
{
	Box kutu;
	kutu.setWidth(12.0);
	printWidth( kutu );

	return 0;
}