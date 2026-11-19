#include <iostream>
using namespace std;
int main() {
	int a = 6;
	int b = 9;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a * 1.0 / b << endl;

	a = 10000000;
	b = 100000;
	cout << a * b << endl;
	cout << (long long)a * b << endl;//强制转换成longlong，否则会越界

	a = +6;  //6
	b = -a;
	cout << a << ' ' << b << endl;
	int c = -(-a);
	cout << c << endl;

	char A = 'A';
	A = A + 1;  //ASCLL码运算
	cout << A << endl; 
	return 0;
}