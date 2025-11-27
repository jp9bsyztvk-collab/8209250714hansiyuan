#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a = 0;
	double x_n;
	double x_n2 = 0;
	cout << "请输入一个数字" << endl;
	cin >> a;
	x_n = a;
	if (a == 0)
	{
		cout << "平方根为0" << endl;
	}
	if (a > 0)
	{
	act:x_n2 = (x_n + a / x_n) / 2;
		if (fabs(x_n2 - x_n) < 1e-5)
		{
			cout << "平方根为" << x_n2;
		}
		else
		{
			x_n = x_n2;
			goto act;
		}
	}
	if (a < 0)
	{
		cout << "请重新输入一个大于等于0的数字" << endl;
	}
	return 0;
}