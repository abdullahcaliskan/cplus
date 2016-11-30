#include <iostream>

using namespace std;

namespace scope1{
	namespace scope1_1{
		void func(){
			cout << "scope1 >> scope1_1" << endl;
		}
	}
}

using namespace scope1::scope1_1;

int main()
{
	func();
	return 0;
}