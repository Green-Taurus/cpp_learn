#include <iostream>
using namespace std;
int main() {
	//1.位或的定义
	int a = 0b1010;
	int b = 0b0110;
	cout << (a | b) << endl;
	cout << "---" << endl;

	//2.设置标志位
	int c = 0b100111;
	      //0b101111;
	cout << (c | (0b1000)) << endl;
	cout << "---" << endl;

	//3.置空标志位
	int d = 0b000001;
	cout << ((c | d) - d) << endl;

	//4.低位连续0变成1
	int e = 0b1010010000;
	cout << (e | (e - 1)) << endl;


	return 0;
}