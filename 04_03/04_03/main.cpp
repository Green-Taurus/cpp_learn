#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
/*
* float    4字节  0000
* double   8字节  0000 0000
*/
#define eps 1e-7
int main()
{
	float a = 13.1415926f; //输出13.14159298  出现误差
	double b = 13.14159261111111111111;
	double c = 1.5e5;  //1.5*100000
	double d = 1.5e-5;  //1.5*00000.1
	cout << setprecision(10)<< a << endl;
	cout << setprecision(16)<< b << endl;
	cout << setprecision(16) << c << endl;
	cout << d << endl;
	double x = 1.0 / 234324247 * 234324247;
	cout <<  x << endl;
	if (fabs(x - 1)<eps) {   //对于浮点型判相等，应该用减法，其结果小于某一个精度范围
		cout << "hhh";
	}


	return 0;
}