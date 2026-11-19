#include <iostream>
using namespace std;

int main() {
	short a = 1;
	int b = 1;
	long long d = 1;

	cout << sizeof(short) << endl; //2
	cout << sizeof(int) << endl;
	cout << sizeof(long long) << endl;
	cout << sizeof(d) << endl;

	return 0;
}