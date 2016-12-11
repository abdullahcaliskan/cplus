#include <iostream>
#include <string>
using namespace std;

// Base Class
class PayBasic{
public:
	// Members
	double Price;
};
// Derived Class
class CreditCard : public PayBasic {
public:
	long int CardNo;
	string ExpirationDate;
	short int CVC2;
};

// Derived Class
class Cash : public PayBasic {
	bool InDoor;
};
