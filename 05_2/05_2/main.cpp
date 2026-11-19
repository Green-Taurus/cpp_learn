#include <iostream>
using namespace std;
//= ¸³ÖµÔËËã·û
int main() {
	int x = 6;
	int y = 9;
	x = y;
	cout << x << endl;

	x = x + y; //x += y
	cout << x << endl;
	x -= y;//x = x - y
	cout << x << endl;

	x *= y; //x = x * y
	x /= y; //x = x / y

	x %= y;
	return 0;
}