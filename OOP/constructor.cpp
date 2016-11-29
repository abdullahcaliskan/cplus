#include <iostream>

using namespace std;

/*
Constructor : kurucu method. 
Bir nesne üretirken, çalışan metoddur.
class'dan üretilecek olan, nesnelerin varsayılan degerlerini ayarlamaya yarar.

!!! Constructor'ın geri dönüş degeri yoktur. Ama void'de degildir.
*/

class Line {
	public:
		void setLength(double len);
		double getLength(void);
		Line(); // Constructor prototype , function inline.

	private:
		double length;
};

Line::Line(void)
{
	cout << "Nesne oluşturuldu" << endl;
	length = 1.0; // Varsayılan deger atama.
}
void Line::setLength(double len) {
	length = len;
}
double Line::getLength(void) {
	return length;
}


int main()
{
	Line line;
	cout << "Line genişlik:" << line.getLength() << endl;
	line.setLength(6.0);
	cout << "Line genişlik:" << line.getLength() << endl;
}