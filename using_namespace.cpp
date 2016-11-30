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

// Bu sayede, func() şeklinde bir çağrı scope1'den gelir.
using namespace scope1;

int main()
{
	func();
	return 0;
}