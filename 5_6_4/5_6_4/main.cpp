#include <iostream>
using namespace std;

//按位取反   ~
int main() {
	//1.按位取反的定义
	int a = 0b00000000000000000000000000000001;
	int b = 0b11111111111111111111111111111110;
	cout << (~a) << endl;//-2
	cout << b << endl;
	return 0;
}