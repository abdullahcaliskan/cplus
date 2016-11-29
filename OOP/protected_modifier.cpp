#include <iostream>

using namespace std;

class Box {
	protected:
		double width;
};

class SmallBox:Box // Kalıtım işlemi, küçük kutu, kutunun özellişmiş halidir.
{
	public:
		void setSmallWidth(double wid);
		double getSmallWidth(void);
};

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}
double SmallBox::getSmallWidth(void)
{
	return width;
}

int main()
{
	SmallBox kucukKutu;
	Box kutu;

	kucukKutu.setSmallWidth(25.0);
	//kutu.width = 15.0; Error verir: Protected erişim belirleyicisi

	//cout << kutu.width << endl; Protected
	cout << kucukKutu.getSmallWidth() << endl;
}