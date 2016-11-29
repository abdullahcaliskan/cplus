#include <iostream>

using namespace std;

class Box {
	public:
		double uzunluk;
		double derinlik;
		double yukseklik;

		// function inline definition
		double hacimHesapla(void)
		{
			return (uzunluk * derinlik * yukseklik);
		}
};


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