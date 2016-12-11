/*
Bir sınıfın sahip olduğu niteliklerin ve metotların başka alt sınıflar tarafından kullanılabilmesine
olanak sağlayan OOP özelliğidir.
Base class'dan miras alınarak yeni bir sınıf oluşturulur. Bu sınıfa Derived class denir.
Derived class, Base class'ın sahip olduğu tüm niteliklere, özelliklere ve metotlara sahiptir.

Kalıtım bir kategori hakkında bildiklerimizi daha spesifik bir kategoriye uygulamamızı sağlayan prensiptir.

Urun > Telefon / Kitap
Base > Devived / Derived
*/

#include <iostream>
using namespace std;

// Base  / Super / Parent Class
class Sekil{
public:
	void setWidth(int w){
		this->width = w;
	}
	void setHeight(int h){
		this->height = h;
	}
protected:
	int width;
	int height;
};

// Derived / Sub / Child Class 
class Dortgen : public Sekil {
public:
	int getArea(){
		return this->width * this->height;
	}
};

int main(void){
	Dortgen dort;

	dort.setWidth(10);
	dort.setHeight(5);

	cout << dort.getArea() << endl;
}