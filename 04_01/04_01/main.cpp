#include <iostream>
using namespace std;
/*
* 一个字节8个位，每个位是0和1，所以范围是2^16
short        2字节  00  （-2^15 - 2^15-1）
int          4字节  0000  2^32
long         4字节  0000  2^32
long long    8字节  00000000  2^64
*/
int main() {
	short a = 32769; //溢出，输出为-32767;
	int b = 1;
	long c = 1;
	long long d = 1;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}