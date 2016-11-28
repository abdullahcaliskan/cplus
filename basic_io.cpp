#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Input your name:";
	cin >> name;
	cout << "Welcome "<< name << endl;
	cerr << "No Error" << endl;
	clog << "No Log" << endl;
}