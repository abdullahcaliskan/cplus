#include <iostream>

using namespace std;

class Box
{
	public:
		Box (double, double, double); // Constructor
		double Volume(); 
		int Compare(Box);
	private:
		double length;
		double breadth;
		double height;
};
Box::Box(double l=2.0, double b=2.0, double h=2.0)
{
	length = l;
	breadth = b;
	height = h;
}
double Box::Volume()
{
	return (length * height * breadth);
}
int Box::Compare(Box p_box)
{
	cout << this->Volume() << endl;
	cout << p_box.Volume() << endl;
}

int main(void)
{
	Box box1(10.0, 10.0, 10.0);
	Box box2(6.0, 7.0, 2.0);

	box1.Compare(box2);

}