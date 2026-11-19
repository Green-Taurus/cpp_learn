#include <iostream>
using namespace std;
//相同为0，不同为1

int main() {
	int a = 0b1010;
	int b = 0b0110;
	cout << (a ^ b) << endl;
	cout << "----" << endl;

	//标记位取反
	int c = 0b100101;
	cout << (c ^ 0b1000) << endl;//


	return 0;
}