#include <iostream>
#include <ctime>
#include <cstdlib>

#define LIMIT 5
using namespace std;

int *getRandom()
{
	static int r_numbers[LIMIT];
	srand((unsigned)time( NULL ));

	for (int i=0; i < LIMIT; i++)
	{
		r_numbers[i] = rand();
		cout << r_numbers[i] << endl;
	}
	return (&r_numbers[0]); // veya return(r_numbers); adresi dönüüyor.
}

int main()
{
	int *ptr;
	ptr = getRandom();
}