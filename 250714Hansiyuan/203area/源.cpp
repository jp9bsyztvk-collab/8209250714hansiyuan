#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	double d;
	cout << "请输入三角形的三条边长";
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		d = a + b + c;
		cout << "三角形周长为：" << d << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等边三角形" << endl;
		}
	}
	else
	{
		cout << "三边不能组成三角形,请重新开始" << endl;
	}
	return 0;
}