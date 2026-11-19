#include <iostream>
using namespace std;

//转义字符
//“\”开头加上某个字母的字符叫转义字符 
int main() {
	char a = '\n';      //换行符
	cout << "算法" << a;
	cout << (int)a << endl;


	return 0;
}

/*
* \0xx表示一个8进制  077对应？
* \\
* \n
* \t
* 字符串输出引号  \"表示引号
*/