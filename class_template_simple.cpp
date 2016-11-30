#include <iostream>

using namespace std;

class Calc
{
	public:
		int multiply(int, int);
		int add(int, int);
};

int Calc::multiply(int x, int y)
{
	return x * y;
}
int Calc::add(int x, int y)
{
	return x + y;
}
// Yukarıdaki class sadece int veri tipi için çalışabilir.
// Bunu template'e dönüştürelim ve tüm veri tipleri için çalışmasını sağlayalım.

template <class Hesap_T>
class Hesapla
{
	public:
		Hesap_T sayi1;
		Hesap_T sayi2;
		Hesap_T Carp( Hesap_T, Hesap_T );
		Hesap_T Topla( Hesap_T, Hesap_T );
};
template <class Hesap_T> Hesap_T Hesapla<Hesap_T>::Carp( Hesap_T x, Hesap_T y)
{
	this -> sayi1 = x;
	this -> sayi2 = y;
	return sayi1 * sayi2;
}
template <class Hesap_T> Hesap_T Hesapla<Hesap_T>::Topla( Hesap_T x, Hesap_T y )
{
	this -> sayi1 = x;
	this -> sayi2 = y;
	return sayi1 + sayi2;
}

int main()
{
	Hesapla <double> h;
	cout << h.Carp(2,5) << endl;
}