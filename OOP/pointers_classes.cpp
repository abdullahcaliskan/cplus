#include <iostream>

using namespace std;

class Box
{
	public:
		Box (double, double, double); // Constructor
		
		double Volume(){
			return length * breadth * height;
		}
	private:
		double length;
		double height;
		double breadth;
};
Box::Box(double l, double b, double h)
{
	this->length = l;
	this->breadth = b;
	this->height = h;
}

int main()
{
	Box box1(5.0, 6.8, 5.6);
	Box box2(6.7, 4.2, 8.7);

	// Pointerlar, structlarda oldugu gibi classlarda da aynı şekildedir. -> operatörü ile erişebilirsiniz.
	Box *ptrBox; //Class pointer

	ptrBox = &box1; // box1'in adresini al.
	cout << "Volume of box1 : " << ptrBox -> Volume() << endl;

	ptrBox = &box2;
	cout << "Volume of box2 : " << ptrBox -> Volume() << endl;

	// Class'larla references kullanımı.
	Box& refBox = box1;
	cout << "Volume of box1 : " << refBox.Volume() << endl;
}