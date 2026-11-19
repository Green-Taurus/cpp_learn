#include <iostream>
using namespace std;

int main() {
	char a = 'y';
	char b = 'z';
	cout << a << endl;
	cout << int(a) << endl;
	cout << sizeof(a) << endl;  //字符类型char是单引号；一个字节
	cout << b-a << endl;
	cout << int(b) << endl;
	b = 120;
	cout << b << endl;
	return 0;  
}