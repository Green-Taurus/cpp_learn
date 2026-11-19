#include <iostream>
using namespace std;

//bool 布尔类型  真和假
//ture对应1    false对应0
int main() {
	bool flag1 = false;
	bool flag2 = true;
	cout << flag1 << endl << flag2<<endl;   //输出0 和 1
	flag1 = !flag1;
	cout << flag1 << endl;
	cout << sizeof(bool) << endl;
	return 0;
}