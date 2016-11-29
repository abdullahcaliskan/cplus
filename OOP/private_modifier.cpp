#include <iostream>

using namespace std;

class Box {
	// Private bu şekilde tanımlanablir.
	// Okunaklılıgı arttırmak için etiket kullanın.
	// double width;
	public:
		double length;
		void setWidth(double wid);
		double getWidth(void);
	private:
		double width;
};

void Box::setWidth(double wid) {
	width = wid;
}
double Box::getWidth(void) {
	return width;
}

int main()
{
	Box kutu1;

	kutu1.length = 10.0;
	kutu1.setWidth(15.0);

	cout << kutu1.length << endl;
	cout << kutu1.getWidth() << endl;

	// Private erişim belirleyicileri kullanarak,
	// veri okuma/yazma işlemleri için, metotları kullanmaya
	// ZORLAMIŞ oluyoruz. Metotlarda, soyutlama yapabiliriz.
}