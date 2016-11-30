#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexpect>

using namespace std;

template <class T>
class Stack {
	private:
		std::vector<T> elems; // elementler
	
	public:
		void Push( T const& ); // Push element method
		void Pop(); // Pop element method
		T Top() const; // Return top element

		bool Empty() const{
			return elems.Empty();
		}

};

template <class T>
void Stack<T>::Push( T const& elem) {
	//append copy of passed element. Stack'e ekleme yapıyor
	elems.push_back(elem);
}

template <class T>
void Stack<T>::Pop(){
	if(elems.Empty()){ // Stackte element yok ise, empty stack uyarısı
		throw out_of_range("Stack<>::pop(): empty stack");
	}
	// remove last element
	elems.pop_back(); // stack yüksek degerden, düşmeye başlar 4000, 3999, 3998
}

template <class T>
T Stack<T>::Top() const {
	if (elems.Empty()){
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// return copy of element
	return elems.back;
}

int main()
{
	try
	{
		Stack<int>	intStack;
		Stack<string> stringStack;

		intStack.Push(7);
		cout << intStack.Top() << endl;

		stringStack.Push("Hello");
		cout << stringStack.Top() << endl;

		stringStack.Pop();
		stringStack.Pop();
	}
	catch (exception const& ex)
	{
		cerr << "Exception: " ex.what() << endl;
		return -1;
	}
}