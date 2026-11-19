#include <iostream>
using namespace std;

int main() {
	int a = 1;
	a = (5 - 6, 8 + 9, 100 / 7);  //-1, 17, 14    取最后一个，优先级特别低，所以要加括号
	cout << a << endl;

	//1.案例1
	int x = 4;
	int y = 5;
	int tmp = x;
	x = y;
	y = tmp;
	cout << x << "  " << y << endl;

	tmp = x, x = y, y = tmp; //执行变量交换
	cout << x << "  " << y << endl;

	return 0;
}