#include <iostream>

using namespace std;

class Line {
	public:
		int getLength(void);

		Line( int len ); // Kurucu method
		Line( const Line &obj ); // Copy constructor
		~Line(); // Yıkıcı method
	private:
		int *ptr;
};

Line::Line( int len )
{
	cout << "Normal constructor, allocating ptr" << endl;
	ptr = new int;
	*ptr = len;
}
Line::~Line(void)
{
	cout << "Bellek alanı serbest bırakılıyor" << endl;
	delete ptr;
}
Line::Line( const Line &obj )
{
	cout << "Copy constructor allocating ptr" << endl;
	ptr = new int;
	*ptr = *obj.ptr; // Parametre olarak gelen, nesnenin degerlerini yeni nesneye kopyala.
}

int Line::getLength( void )
{
	cout << "getLength çalışıyor.." << endl;
	return *ptr;
}
void display(Line obj)
{
	cout << "Length of obj : " << obj.getLength() << endl;
}

int main()
{
	Line line(10);

	display(line); // Nesneler parametre oldugunda, pass-by-reference olarak giderler.

	Line cizgi1(10);
	Line cizgi2 = cizgi1; //Copy constructor çagırılıyor.


	return 0;
}