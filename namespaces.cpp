#include <iostream>
// 2 tane kütüphane kullandıgımızı ve ikisinde de aynı isimde tanımlanmış
// fonksiyonlar oldugunu düşünürsek, derleyiciye hangi fonksiyonu kullanması gerektiigiini söylememiz gerektigini anlayaibliriz.

using namespace std;

// Namespace tanımlamak
namespace scope1
{
	void func(){
		cout << "scope1" << endl;
	}
}

namespace scope2
{
	void func(){
		cout << "scope2" << endl;
	}
}

int main()
{
	scope1::func();
	scope2::func();
	return 0;
}