#include <iostream>
#include <string>
using namespace std;


/*
* char 变量名[] = "字符串常量"；
*/
int main() {
	char a[] = "英雄算法联盟";//最后实际有个\0在末尾
	cout << sizeof(a) << endl;

	string b = "夜深人静";   //c++风格
	cout << b  + ":" << endl;
	return 0;
}