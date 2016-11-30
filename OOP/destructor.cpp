#include <iostream>

using namespace std;

class Line {
	public:
		void setLength( double len );
		double getLength( void );

		Line(void); // Başlatıcı method - constructor
		~Line(void); // Yıkıcı method - destructor
		// Destructor: Nesne yok edilirken yapılacak işlemler
		// Parametre almaz, geri dönüş degeri yoktur.
	private:
		double length;
};

Line::Line(void)
{
	cout << "Nesne oluşturuldu" << endl;
}
Line::~Line(void)
{
	cout << "Nesne silindi" << endl;
}
void Line::setLength( double len )
{
	length = len;
}
double Line::getLength( void )
{
	return length;
}

int main()
{
	Line line;
	line.setLength(6.0);
	cout << "length of line : " << line.getLength() << endl;

	return 0;
}