#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	cout << "对应的摄氏温度是：" << fixed << setprecision(2) << (a - 32) / 18 << endl;
	return 0;
}