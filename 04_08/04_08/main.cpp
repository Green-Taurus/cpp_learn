#include <iostream>
#include <string>
using namespace std;
//输入和输出
int main() {
	//1.整形的输入
	int a = 5;
	cin >> a;
	cout <<"a的值变成了：" << a << endl;
	//2.浮点型的输入
	double b = 7;
	cin >> b;
	cout << "b变成了:" << b << endl;   
	//tips:如果前面定义整型的输入，但是输入的是个小数，比如3.14
	// 程序会在读取到3后，在读取到"."时而停止读取，从而将a赋值为3
	// 且留在输入缓冲区的".14"依然存在，故会直接输出b为0.14
	//3.字符型的输入
	char c = 7;
	cin >> c;
	cout << "c的值变成了:" << c << endl;
	//4.字符串型
	string d = "lover";
	cin >> d;
	cout << "d变成了:" << d << endl;
	//5.布尔类型
	bool e = false;
	cin >> e;
	cout << "e变成了:" << e << endl;
	string f;
	cin >> f;
	cout << "f变成了" << f << endl;
	return 0;
	//对于bool类型的输入，如果当需要读取bool类型时，由于bool只读取0或者1
	//如果读取的不是这两个，比如5，此时cin进入fail状态（读取了非法字符）
	//后续的所有输入读取失败，不会进入缓冲区，故缓冲区的字符一直是空的
}