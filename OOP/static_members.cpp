#include <iostream>
#include <string>
using namespace std;

class Personel
{
	public:
		// Statik olarak tanımlandıgında, bu nitelik tüm nesneler için geçerlidir.i.
		static int personelCounter;
		void PersonelEkle(string, long);
		int PersonelSayisi();
	private:
		string ad;
		long tcNo;
};

// Static niteliğe değer atama
int Personel::personelCounter = 0;

int Personel::PersonelSayisi()
{
	return (this->personelCounter);
}

void Personel::PersonelEkle(string name, long tc)
{
	this -> ad = name;
	this -> tcNo = tc;
	this -> personelCounter++;
}

int main()
{
	Personel per;
	per.PersonelEkle("abdullah",1234);
	cout << Personel::personelCounter << endl;
}