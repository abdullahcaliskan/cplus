#include <iostream>

using namespace std;

// inline fonksiyonları sınıflar ile çok kullanılırlar.
// bir fonksiyon inline olarak tanımlanmışsa, derleyici onun bir kopyasını alır ve
// derleme zamanında, her çağrılısında bu fonksiyonu tanımlar.

inline int Max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << Max(10,20) << endl;
	return 0;
}