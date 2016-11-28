#include <iostream>
#include <string>
using namespace std;

typedef enum 
{
	Roman,
	Hikaye,
	KisiselGelisim,
	Teknik
}Konu;

struct Book
{
	string ad;
	string yazar;
	unsigned int ISBN;
	int bookId;
	Konu subject;
};



int main()
{
	struct Book modernOS;
	modernOS.ad = "Modern Operating System";
	modernOS.yazar = "Tanenbaum";
	modernOS.subject = Roman;

	cout << modernOS.ad << endl;
	cout << modernOS.yazar	<< endl;
	cout << modernOS.subject << endl;

	// Structs and Pointers

	struct Book *ptrBook;
	ptrBook = &modernOS;

	cout << ptrBook -> ad << endl;
}