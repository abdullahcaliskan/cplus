#include <iostream>

using namespace std;

void getAverage(double *, double *, int);
void sumArray(double *, double *, int );

int main()
{
	double numbers[] = {1,2,3,4,5};
	double average = 0;
	int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

	getAverage(&numbers[0], &average, sizeOfNumbers);

	cout << "Ortalama : " << average << endl; 

}


void sumArray(double *array, double *value, int limit)
{
	for (int i=0; i<limit; i++)
	{
		*value += *(array+i);
	}
}


void getAverage(double *ptrArray, double *avg, int limit)
{
	sumArray(ptrArray, avg, limit);
	*avg = *avg / limit;
}
