#include <iostream>

using namespace std;

class Box {
	public:
		double uzunluk;
		double derinlik;
		double yukseklik;

		// Bu şekilde tanımlayabiliriz.
		double hacimHesapla(void)
		{
			return (uzunluk * derinlik * yukseklik);
		}

		// Veya function inline dedigimiz, prototype'ını buraya yazabiliriz.
		// Böylece scope resolution operator ile istedigimiz bir yerde method tanımlayabiliriz.

		double alanHesapla(void);	
};

// Bu örnek için tam olmayacak ama alanHesapla methodunu
// scope resolution operatoru (::) ile de tanımlayabiliriz.
// kapsam çözümleme operatörü

double Box::alanHesapla(void)
{
	return (uzunluk * yukseklik);
}


int main()
{
	Box kutu1; // Kutu nesnesini oluşturduk

	kutu1.uzunluk = 10.0;
	kutu1.yukseklik = 12.0;
	kutu1.derinlik = 5.0;

	Box kutu2;

	kutu2.uzunluk = 20.0;
	kutu2.yukseklik = 25.0;
	kutu2.derinlik = 12.0;

	// Methodların kullanılması
	cout << kutu1.hacimHesapla() << endl;
}