#include<iostream>
using namespace std;
int main()
{
	float r;
	float h;
	const float pi = 3.1415;
	cout << "请输入圆锥的底面半径和高" << endl;
	cin >> r >> h;
	cout << "圆锥体积为" << 1.0 / 3 * pi * r * r * h;
	return 0;
}