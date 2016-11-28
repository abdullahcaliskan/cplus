#include <iostream>
#include <ctime>

using namespace std;

double vals[] = {1.2, 3.4, 5.6, 7.8};
int limit = sizeof(vals) / sizeof(vals[0]);

double& setValues (int i)
{
	return vals[i];
}

void ListVals()
{
	cout << "Value of vals" << endl;
	for (int i=0; i<limit; i++)
	{
		cout << "vals["<<i<<"] = " << vals[i] << endl;
	}
}


int main()
{
	ListVals();
	setValues(1) = 20.45;

	ListVals();
}